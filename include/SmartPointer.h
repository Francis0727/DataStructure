#ifndef _SMAREPOINTER_H
#define _SMAREPOINTER_H

#include "Pointer.h"

namespace DTLib {

template<typename T>
class SmartPointer : public DTLib::Pointer<T>{
public:
    SmartPointer(T* p = nullptr) : Pointer<T>(p) {

    }

    SmartPointer(const SmartPointer& obj):Pointer<T>(nullptr) {
        this->m_pointer = obj.m_pointer;
        const_cast<SmartPointer&>(obj).m_pointer = nullptr;
    }

    SmartPointer &operator= (const SmartPointer& obj) {
        if (this != &obj){
            delete this->m_pointer;
            this->m_pointer = obj.m_pointer;
            const_cast<SmartPointer&>(obj).m_pointer = nullptr;
        }

        return *this;
    }

    ~SmartPointer() {
        std::cout << "~SmartPointer()..." << std::endl;
        delete this->m_pointer;
    }
};

}

#endif