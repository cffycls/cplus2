//
// Created by cffyc on 2020/4/20.
//
#include <iostream>
#include "libs/Line.h"
using namespace std;

int main()
{
    Line * l1 = new Line(1,2,3,4);
    l1->info();
    delete l1;
    l1 = NULL;

    system("chcp 65001 > nul");
    cout << "内存占用：\nsizeof(l1)=" << sizeof(l1) << "; sizeof(Line)=" << sizeof(Line) << endl;

    return 0;
}


