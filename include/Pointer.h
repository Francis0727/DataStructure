#ifndef _POINTER_H
#define _POINTER_H

#include "Object.h"

namespace DTLib {

template<typename T>
class Pointer : public DTLib::Object{
protected:
    T* m_pointer = nullptr;

public:
    Pointer(T* p = nullptr) : m_pointer(p) {
        
    }

    T* operator->() {
        return m_pointer;
    }

    const T* operator->() const {
        return m_pointer;
    }

    T& operator*() {
        return *m_pointer;
    }

    const T& operator*() const {
        return *m_pointer;
    }

    bool isNull() const {
        return (m_pointer == nullptr);
    }

    T* get() const {
        return m_pointer;
    }
};

}

#endif