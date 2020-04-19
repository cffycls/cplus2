//
// Created by cffyc on 2020/4/17.
//
#include <iostream>
using namespace std;

int main()
{
    /**
     * 65001    UTF-8代码页
     * 936      简体中文默认的GBK
     */
    system("chcp 65001 > nul");

    //1.提示用户输入姓名，并接收
    cout << "请输入姓名：" << endl;
    string name;
    getline(cin, name);
    //2.判断非空
    if (name.empty()) {
        cout << "input is null" << endl;
        system("pause");
        return 1;
    }
    //3.判断相等
    if (name == "imooc"){
        cout << "your role is administrator" << endl;
    }else{
        cout << "hello " + name + "; length=" << name.size() << endl;
    }
    cout << "first letter is " << name[0] << endl;

    string ss[20];

    system("pause");
    return 0;
}
