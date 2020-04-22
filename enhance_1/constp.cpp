//
// Created by cffyc on 2020/4/20.
//
#include <iostream>
#include "libs/Linep.h"
using namespace std;

int main()
{
    Linep ln(1, 2, 3, 4);
    ln.info();

    cout << "=====================" << endl;
    const Linep lp(11, 22, 33, 44);
    lp.info();

    return 0;
}
