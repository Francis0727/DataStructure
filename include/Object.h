 #ifndef _OBJECT_H
 #define _OBJECT_H

#include <cstddef>

namespace DTLib{

class Object{
public:
    void* operator new(std::size_t size) noexcept;
    void operator delete(void* p);
    void* operator new[](std::size_t size) noexcept;
    void operator delete[](void* p);
    bool operator == (const Object& obj);
    bool operator != (const Object& obj);
     virtual ~Object() = 0;
};

}

 #endif