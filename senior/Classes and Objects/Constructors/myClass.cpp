#include<iostream>
using namespace std;


//类的构造函数是类的特殊成员函数，只要在该类中创建新对象，便会执行它们。
class MyClass
{
    private:
        string name;
    public:
    //构造函数的名称与类的名称相同。它没有返回类型，甚至没有void。
         MyClass(){
             cout << "Hello";
         }
         void setName(string x){
             name = x;
         }
         string getName(){
             return name;
         }
};

int main()
{
    MyClass myObj;
    return 0;
}