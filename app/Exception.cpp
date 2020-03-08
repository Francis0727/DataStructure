#include <string>

#include "Exception.h"

namespace DTLib {

Exception::Exception(const std::string& message)
    :Exception(message,std::string(""),0){

}

Exception::Exception(const std::string& file, int line):
    Exception(std::string(""),file,line){
    
}

Exception::Exception(const std::string& message, const std::string& file, int line){
    this->m_message = message;
    this->m_location = file + std::to_string(line);
}

Exception::Exception(const Exception& e) {
    this->m_message = e.m_message;
    this->m_location = e.m_location;
}

Exception& Exception::operator= (const Exception& e){
    if (this != &e){
        this->m_message = e.m_message;
        this->m_location = e.m_location;
    }
    return *this;
}

const std::string& Exception::message() const {
    return this->m_message;
}

const std::string& Exception::location() const {
    return this->m_location;
}

Exception::~Exception() {

}

}