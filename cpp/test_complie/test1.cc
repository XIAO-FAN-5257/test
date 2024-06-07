// Test1.cpp
#include "header.h"
#include "test1.h"
#include <iostream>

void Func1(LargeObject* l) {  
  // 输出kLargeObject 的地址。

  std::cout << "Large Object : " << &kLargeObject << std::endl;
  // 输出kStr 的地址。

  std::cout << "String: " << &kStr << std::endl;
}

