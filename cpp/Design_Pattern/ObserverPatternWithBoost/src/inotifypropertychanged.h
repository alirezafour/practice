#ifndef INOTIFYPROPERTYCHANGED_H
#define INOTIFYPROPERTYCHANGED_H
#include <boost/signals2.hpp>
#include <string>

template<typename T>
class InotifyPropertyChanged
{
public:
    virtual ~InotifyPropertyChanged() = default;
    boost::signals2::signal<void(T&, const std::string&)> PropertyChanged;
};

#endif // INOTIFYPROPERTYCHANGED_H
