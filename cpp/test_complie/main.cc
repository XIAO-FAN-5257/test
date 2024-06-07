#include "test1.h"
#include "test2.h"
#include <iostream>

int main() {
  Func1(nullptr);
  Func2(nullptr);
  // 输出kLargeObject 的地址。

  std::cout << "Large Object : " << &kLargeObject << std::endl;
  // 输出kStr 的地址。

  std::cout << "String: " << &kStr << std::endl;

  return 0;
}