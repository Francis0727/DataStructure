#include "Object.h"
#include <iostream>

namespace DTLib {

void* Object::operator new(std::size_t size) noexcept{
    std::cout <<"operator new(unsigned int)..." << std::endl;
    return malloc(size);
}

void Object::operator delete(void* p){
    std::cout << "operator delete(void*)..." << std::endl;
    free(p);
}

void* Object::operator new[](std::size_t size) noexcept {
    std::cout <<"operator new[](unsigned int)..." << std::endl;
    return malloc(size);
}

void Object::operator delete[](void* p){
    std::cout <<"operator delete[](void*)..." << std::endl;
    free(p);
}

bool Object::operator == (const Object& obj){
    return (this == &obj);
}

bool Object::operator != (const Object& obj){
    return (this != &obj);
}

Object::~Object(){
    
}

}
