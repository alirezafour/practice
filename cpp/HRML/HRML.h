#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <stack>
#include <map>
#include <memory>


class Attribute
{
public:
	Attribute(std::string name, std::string value)
		:m_Name(name)
	{
		value.erase(begin(value));
		value.erase(end(value) - 1);
		m_Value = value;
	}

	std::string GetValue() const { return m_Value; }
	std::string GetName() const { return m_Name; }

private:
	std::string m_Name;
	std::string m_Value;
};

class Tag
{
public:
	Tag(std::string name = "")
		: m_Name(name)
	{
	}

	std::string GetName() const
	{
		return m_Name;
	}

	void AddAttribute(Attribute attribute) noexcept
	{
		m_Attributes.push_back(std::move(attribute));
	}
	void AddAttributes(std::vector<Attribute>&& attributes) noexcept
	{
		m_Attributes = attributes;
	}

	std::string GetAttributeValue(const std::string& attributeName) const noexcept
	{
		for (const Attribute& each : m_Attributes)
		{
			if (each.GetName() == attributeName)
			{
				return each.GetValue();
			}
		}
		return "Not Found!";
	}

	// return index of added tag
	void AddTag(Tag&& tag) noexcept
	{
		m_Tags.push_back(std::move(tag));
	}

	Tag* GetLastAddedTag()
	{
		return (m_Tags.size() <= 0) ? nullptr : &(m_Tags[m_Tags.size() - 1]);
	}

	bool HasTag(const std::string& tagName) const noexcept
	{
		for (auto& each : m_Tags)
		{
			if (each.GetName() == tagName)
			{
				return true;
			}
		}
		return false;
	}

	Tag GetTag(const std::string& tagName) const noexcept
	{
		for (auto& each : m_Tags)
		{
			if (each.GetName() == tagName)
			{
				return each;
			}
		}
		return {};
	}

private:
	std::string m_Name;
	std::vector<Attribute> m_Attributes;
	std::vector<Tag> m_Tags;
};

class HRML
{
public:
	HRML(const std::vector<std::string>& lines)
		: m_Lines(lines)
	{
		makeTagsFromLines();
	}

	std::string GetParam(const std::string& query) const noexcept
	{
		std::stringstream ss(query);
		std::string word;
		Tag tag{};
		while (!ss.eof())
		{
			getline(ss, word, '.');
			if (word.find('~') == std::string::npos)
			{
				if (tag.GetName().empty())
				{
					bool is_found = false;
					for (auto& root : m_RootTags)
					{
						if (root.GetName() == word)
						{
							tag = root;
							is_found = true;
							break;
						}

					}
					if (!is_found) return "Not Found!";

				}
				else
				{
					tag = tag.GetTag(word);
					if (tag.GetName().empty()) return "Not Found!";
				}
			}
		}
		std::stringstream ss2(word);

		getline(ss2, word, '~');
		if (!tag.GetName().empty())
		{
			tag = tag.GetTag(word);
			getline(ss2, word, '~');
			return tag.GetAttributeValue(word);
		}
		for (auto& root : m_RootTags)
		{
			if (root.GetName() == word)
			{
				getline(ss2, word, '~');
				return root.GetAttributeValue(word);
			}
		}
		return "Not Found!";

	}

protected:
	std::vector<Attribute> MakeAttributeFromWord(std::string& word) const noexcept
	{
		std::vector<Attribute> result;

		while (!word.empty())
		{
			std::string parameter = word.substr(0, word.find('=') - 1);
			word.erase(0, word.find('='));
			std::string value = word.substr(word.find('=') + 2);
			if (value.find(' ') == std::string::npos)
			{
				result.emplace_back(parameter, value);
				return result;
			}
			word = value.substr(value.find(' ') + 1);
			value.erase(value.find(' '), word.size() + 1);
			result.emplace_back(parameter, value);
		}

		return result;
	}
	Tag MakeTageFromLine(std::string&& line) const noexcept
	{
		line.erase(begin(line));	// erase <
		line.erase(end(line) - 1);		// erase >

		std::stringstream ss(line);
		std::string tagName;

		std::getline(ss, tagName, ' ');
		Tag tag(tagName);
		if (ss.str().size() > tagName.size())
		{
			std::string parameters(ss.str().substr(tagName.size() + 1));
			tag.AddAttributes(MakeAttributeFromWord(parameters));
		}

		return tag;
	}
	void makeTagsFromLines()
	{
		std::stack<Tag*> stack;
		std::vector<std::string> tagQuery;
		Tag* parent = nullptr;
		for (std::string line : m_Lines)
		{
			if (stack.size() <= 0 && line[1] != '/')
			{
				m_RootTags.push_back(MakeTageFromLine(std::move(line)));
				parent = &m_RootTags[m_RootTags.size() - 1];
				stack.push(parent);
				continue;
			}
			if (line[1] == '/')
			{
				if (stack.size() <= 0)
					throw std::string("missing opening bracket.");
				stack.pop();
				if (stack.size() > 0)
					parent = stack.top();
				else
					parent = nullptr;
			}
			else
			{
				Tag tag = MakeTageFromLine(std::move(line));
				parent->AddTag(std::move(tag));
				parent = parent->GetLastAddedTag();
				stack.push(parent);
			}
		}
	}

private:
	std::vector<std::string> m_Lines;
	std::vector<Tag> m_RootTags;

};