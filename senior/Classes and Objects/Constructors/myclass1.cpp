#include <iostream>
#include<string>
using namespace std;

class MyClass
{
    private:
        string name;           //声明一个私人变量
    public:
    void setName(string x){    //声明一个可以赋值给私人变量的方法
        name = x;
    }
    string getName(){          //声明一个可以返回私人变量的方法
        return name;
    }
};

int main(){
    MyClass myObj;
    myObj.setName("VScode!");
    cout<<myObj.getName();
    return 0;
}