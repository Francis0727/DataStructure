#include <iostream>
#include "SmartPointer.h"

using namespace DTLib;

int main() {
    DTLib::SmartPointer<int> sp = new int(12);
    if (!sp.isNull()){
        std::cout << "*sp: " << *sp << std::endl;
    }

    int* pt = sp.get();
    *pt = 34;
    std::cout << "sp: " << *sp << std::endl;
       
    return 0;
}