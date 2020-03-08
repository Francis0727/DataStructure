#include <iostream>
#include "Object.h"

class Test : public DTLib::Object {
public:
    Test() {
        std::cout <<"*************" << std::endl;
    }
public:
    int i;
    int j;
};

class Child : public Test {
public:
    int k;
};

int main(){
    DTLib::Object* obj1 = new Test();
    DTLib::Object* obj2 = new Child();
    DTLib::Object* obj3 = new Test[3];
    return 0;
}