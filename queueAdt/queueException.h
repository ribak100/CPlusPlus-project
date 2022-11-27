#ifndef QUEUEEXCEPTION_H
#define QUEUEEXCEPTION_H
#include <string>

class QueueException
{
    public:

    QueueException(const std::string& err ) : error(err){};
    std::string error;




};



#endif // QUEUEEXCEPTION_H
