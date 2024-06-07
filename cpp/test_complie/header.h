// header.h
#pragma once
// #ifndef _HEADER_H_
// #define _HEADER_H_

#include <string>
#include <stdio.h>

struct LargeObject {
  int* p;

  LargeObject() {
    p = nullptr;
    printf("Construct\n");
    //std::cout << "Construct" << std::endl;
  }

  ~LargeObject() {

  }
};

const LargeObject kLargeObject;
const std::string kStr = "string";
const int MAX = 10;

// extern const LargeObject kLargeObject ;
// extern const char* kStr;

// #endif