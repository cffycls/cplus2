//
// Created by cffyc on 2020/4/20.
//
#include <iostream>
#include "libs/Array.h"
using namespace std;

int main()
{
    //system("chcp 65001 > nul");
    Array arr(10);
    (arr.info().setLen(5))->setLen(20)->info();
    arr.getLen();

    return 0;
}


