//
// Created by cffyc on 2020/4/20.
//
#include <iostream>
#include "Array.h"
using namespace std;

Array::Array(int len) {
    cout << "ok" << endl;
    this->len = len;
}
Array::~Array() {

}
/*void Array::setLen(int len) {
    this->len = len;
}*/
Array * Array::setLen(int len) {
    this->len = len;
    cout << "use return self's *..." << endl;
    return this;
}
int Array::getLen() {
    cout << "arr's len=" << len << endl;
    return this->len;
}

Array & Array::info()
{
    cout << "use return self's &..." << endl;
    return *this;
}