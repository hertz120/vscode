# include<iostream>
using namespace std;
// 定义一个Box类:关于指定长宽高的数据类型
class Box
{
    public:
        double length;  //定义长
        double breadth; //定义宽
        double height;  //定义高
};

int main()
{
    Box box1;   //声明box1,类型为Box
    Box box2;   //声明box2,类型为Box
    double volume = 0.0;    //用于存放体积

    // box1详情
    box1.length = 5.0;
    box1.breadth = 4.0;
    box1.height = 6.0;

    //box2详情
    box2.length = 9.0;
    box2.breadth = 8.0;
    box2.height = 20.0;

    //计算box体积
    volume = box1.length * box1.breadth * box1.height;
    cout << "box1的体积：" << volume << endl;
    volume = box2.length * box2.breadth * box2.height;
    cout << "box2的体积：" << volume << endl;
    return 0;
}
