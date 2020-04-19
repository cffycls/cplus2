#include <iostream>
//0.引用
#include <string>
#include "TV.cpp"

class Coordinate
{
public:
    int x;
    int y;
    void printX()
    {
        std::cout << x << std::endl;
    }
    void printY()
    {
        std::cout << y << std::endl;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    //5. 类定义与使用，必须在main()之前（否则至少先声明）
    Coordinate ct;
    ct.x = 11;
    ct.y = 33;
    ct.printX();
    ct.printY();
    Coordinate *p = new Coordinate();
    if (p == NULL){
        //xxx
        return 0;
    }
    p->x = 100;
    p->y = 200;
    p->printX();
    p->printY();
    delete p;
    p = NULL;

    //6. 字符串，定义与赋值
    std::string s1;
    std::string s2("Abc");
    std::string s3(s2); //使用副本初始化
    std::string s4(4, 'c'); //初始化字符的n个副本
    std::cout << s1 << "*" << s2 << "+" << s3 << "~" << s4 << std::endl;
    //6.1 字符串常用操作
    s1.empty(); //true or false
    s2.size(); //length
    s2[2]; //索引为2的字符
    s2 + s3; //拼接
    s2 = s3; //替换
    s2 == s3; //比较
    s2 != s3;

    //return 0;

    //1. `从栈`实例化TV: 单个对象、对象数组
    TV tv;
    TV tv20[20];

    //2. `从堆`实例化TV: 单个对象、对象数组
    TV *t = new TV();
    TV *t20 = new TV[20];

    //3. 赋值，执行方法
    tv.type = 20;
    tv.name = "属性必须全值";
    tv.power();
    t->changeVol();
    for (int i = 0; i < 20; i++) {
        t20[i].type = i;
        t20[i].name = "属性必须全值";
        t20[i].power();
    }
    //4. `堆`不用清理：new => delete + null
    delete t;
    t = NULL;
    delete []t20;
    t20 = NULL;

    system("pause");
    return 0;
}
