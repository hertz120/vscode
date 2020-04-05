#include <iostream>
#include<string>
using namespace std;

class MyClass
{
    private:
       string name;
    public:
        MyClass(string nm){     //构造函数的名称与类的名称相同。它可以没有返回类型，甚至没有void。
            setName(nm);
        }
        void setName(string x){  //定义了一个赋值给私人变量的方法
            name = x;
        }
        string getName(){        //定义了一个返回私人变量的方法
            return name;
        }

};

int main(){
    MyClass myObj("VS studio");
    cout << myObj.getName();
}