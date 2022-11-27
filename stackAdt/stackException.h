#ifndef STACKEXCEPTION_H
#define STACKEXCEPTION_H
#include <string>

template <class T>
class stackException
{
public:
    stackException(const string& err): error(err){}
    string error;
};

#endif //STACKEXCEPTION_H
