#include <iostream>

#include "Exception.h"

int main() {
    try{
       // 宏定义不受命名空间的约束,因此DTLib::THROW_EXCEPTION是错误的
       THROW_EXCEPTION(DTLib::ArithmeticExcption,"创建对象发生异常");
    }
    catch(const DTLib::Exception& e){
        std::cout << "location: " << e.location() << std::endl;
        std::cout << "message: " << e.message() << std::endl;
    }
    
    return 0;
}