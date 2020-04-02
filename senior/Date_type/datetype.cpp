#include <iostream>
using namespace std;

int main()
{
     //打印C++已有数据类型的属性
    cout << "type: \t\t"
         << "***size***" << endl;

    // bool型
    cout << "bool:\t\t"
         << "所占字节数:"
         << sizeof(bool) ;
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t最小值：" << (numeric_limits<bool>::min)();

    // char型
    cout << "\nchar:\t\t"
         << "所占字节数:"
         << sizeof(char) ;
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t 最小值：" << (numeric_limits<char>::min)();

    // signed char型
    cout << "\nsigned char:\t"
         << "所占字节数:"
         << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t 最小值：" << (numeric_limits<signed char>::min)();

    // unsigned char型
    cout << "\nunsigned char:\t"
         << "所占字节数:"
         << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned char>::min)();

    // wchar_t型
    cout << "\nwchar_t:\t"
         << "所占字节数:"
         << sizeof(wchar_t) ;
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t最小值：" << (numeric_limits<wchar_t>::min)();

    // short型
    cout << "\nshort:\t\t"
         << "所占字节数:"
         << sizeof(short) ;
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t最小值：" << (numeric_limits<short>::min)();

    // int型
    cout << "\nint:\t\t"
         << "所占字节数:"
         << sizeof(int) ;
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)();

    // unsigned型
    cout << "\nunsigned:\t"
         << "所占字节数:"
         << sizeof(unsigned) ;
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)();

    // unsigned long型
    cout << "\nunsigned long:\t"
         << "所占字节数:"
         << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)();

    // double型
    cout << "\ndouble:\t\t"
         << "所占字节数:"
         << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)();

    // long double型
    cout << "\nlong double:\t"
         << "所占字节数:"
         << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)();

     // float型
    cout << "\nfloat:\t\t"
         << "所占字节数:"
         << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)();

     // size_t型
    cout << "\nsize_t:\t\t"
         << "所占字节数:"
         << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)();

     // string型
    cout << "\nstring:\t\t"
         << "所占字节数:"
         << sizeof(string);
    // cout << "\t最大值：" << (numeric_limits<string>::max)();
    // cout << "\t最小值：" << (numeric_limits<string>::min)();

    cout << "\ntype: \t\t"
         << "***size***" << endl;
    return 0;
}

