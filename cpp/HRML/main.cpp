/*
In HRML, each element consists of a starting and ending tag, and there are attributes associated with each tag. Only starting tags can have attributes. We can call an attribute by referencing the tag, followed by a tilde, '~' and the name of the attribute. The tags may also be nested.

The opening tags follow the format:

<tag-name attribute1-name = "value1" attribute2-name = "value2" ...>

The closing tags follow the format:

</tag-name>

The attributes are referenced as:

tag1~value
tag1.tag2~name

The first line consists of two space separated integers
1. number of line of HRML
2. number of query to find value

if value doesn't exist it return Not Found!

*/


#include <iostream>
#include "HRML.h"

std::vector<std::string> GetLinesAndGenerateList(int numberOfLines) noexcept
{
	std::vector<std::string> result;
	result.reserve(numberOfLines);

	for (int i = 0; i < numberOfLines; i++)
	{
		std::string temp;
		getline(std::cin, temp);
		result.push_back(temp);
	}

	return result;
}



int main()
{
	int n, q;
	
	std::cin >> n >> q;
	std::cin.ignore();
	std::vector<std::string> codelines = GetLinesAndGenerateList(n);
	std::vector<std::string> queryLines = GetLinesAndGenerateList(q);

	HRML hrml(codelines);

	for (auto& each : queryLines)
	{
		std::cout << hrml.GetParam(each) << "\n";
	}

	return 0;
}