#include<iostream>
using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;

        //成员函数声明
        double CalculateVolume(void);
        void setLength(double len);
        void setBreadth(double bre);
        void setHeight(double hei);
};
//成员函数在类外部声明
double Box::CalculateVolume(void)
{
    return length * breadth * height;
}

void Box::setLength(double len)
{
    length = len;
}

void Box::setBreadth(double bre)
{
    breadth = bre;
}

void Box::setHeight(double hei)
{
    height = hei;
}

//主函数
int main()
{
    Box box1;  //声明box1类型为Box
    Box box2;  //声明box2类型为Box
    double volume = 0;  // 用来存放计算的体积值

    //box1
    box1.setLength(3.0);
    box1.setBreadth(4.0);
    box1.setHeight(5.0);
    volume = box1.CalculateVolume();
    cout << "box1的体积：" << volume << endl;

    //box2
    box2.setLength(6.0);
    box2.setBreadth(7.0);
    box2.setHeight(9.0);
    volume = box2.CalculateVolume();
    cout<<"box2的体积："<<volume << endl;

    return 0;
}