#include <iostream>
#include "Test.h"
#include "opencv2/core.hpp"

int main() {

    Test obj = Test();
    obj.setid(10);
    std::cout << obj.getid() << std::endl;

    std::cout << "Hello Boao" << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}