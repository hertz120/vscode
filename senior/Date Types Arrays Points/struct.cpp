#include <iostream>
#include <cstring>
using namespace std;

//声明一个结构体
struct Book
{
    char title[50];
    char author[50];
    int  id;
};

int main()
{
    Book book1; //定义一个
    Book book2;

    // book1详情
    strcpy(book1.title, "Plasma Physic");
    strcpy(book1.author, "ChenJun");
    book1.id = 1001;

    // book2详情
    strcpy(book2.title, "Space Detection");
    strcpy(book2.author, "LiJun");
    book2.id = 1003;

    //打印书籍信息
    cout << "book1\t"
         << book1.title
         <<"\t"
         << book1.author
         <<"\t"
         << book1.id;
    cout << "\nbook2\t"
         << book2.title
         <<"\t"
         << book2.author
         <<"\t"
         << book2.id;

    return 0;
}
