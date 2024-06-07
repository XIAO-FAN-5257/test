// Test2.cpp
#include "test2.h"
#include "header.h"
#include <iostream>

void Func2(LargeObject* l) {
  // 输出kLargeObject 的地址。

  std::cout << "Large Object : " << &kLargeObject << std::endl;
  // 输出kStr 的地址。

  std::cout << "String: " << &kStr << std::endl;
}
