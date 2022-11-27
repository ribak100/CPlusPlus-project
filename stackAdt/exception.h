#include <string>
#include <iostream>
#ifndef EXCEPTION_H
#define EXCEPTION_H




class stackException
{
    public:
        std::string error;
        stackException(const std::string& err): error(err){}



};

#endif //EXCEPTION_H
