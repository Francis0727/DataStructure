#ifndef _EXCEPTION_H
#define _EXCEPTION_H

#include <iostream>
#include "Object.h"

namespace DTLib {

#define THROW_EXCEPTION(e, m) (throw e(m, __FILE__, __LINE__))

class Exception : public Object {
public:
    Exception(const std::string& message);
    Exception(const std::string& file, int line);
    Exception(const std::string& message, const std::string& file, int line);

    Exception(const Exception& e);
    Exception& operator= (const Exception& e);

    virtual const std::string& message() const;
    virtual const std::string& location() const;

    virtual ~Exception();
protected:
    std::string m_message;
    std::string m_location;
};

class ArithmeticExcption : public Exception{
public:
    ArithmeticExcption(std::string message)
        :Exception(message){ }

    ArithmeticExcption(std::string file,int line)
        :Exception(file,line){ }

    ArithmeticExcption(std::string message,std::string file,int line)
        :Exception(message,file,line){ }

    ArithmeticExcption(const ArithmeticExcption& e)
        :Exception(e){ }

    ArithmeticExcption& operator=(const ArithmeticExcption& e){
        Exception::operator=(e);
        return *this;
    }

    ~ArithmeticExcption() override {}
};

}

#endif