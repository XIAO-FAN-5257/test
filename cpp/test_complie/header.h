// header.h
#pragma once
// #ifndef _HEADER_H_
// #define _HEADER_H_

#include <string>
#include <stdio.h>

struct LargeObject {
  int* p;

  LargeObject() {
    p = (int*)malloc (sizeof(int) * 10);
    printf("Construct\n");
  }

  ~LargeObject() {
    free(p);
    printf("Destruct\n");
  }
};

const LargeObject kLargeObject = LargeObject();
const int MAX = 10;

//variable kStr is not a constant and hence has external linkage
const std::string kStr = "string";
// const char* kStr = "string";
//const char* const kStr = "string";

// or
// extern const LargeObject kLargeObject ;
// extern const char* kStr;
// extern const int MAX;

// #endif