#include<iostream>
using namespace std;
//Structure in C++
struct book
{
    int book_id;
    char title[20];
    float price;
};
void display(book);
book input();
int main()
{
    book b1;
    b1 = input();
    display(b1);
}
book input()
{
    book b;
    cout<<"Enter the Book ID , Book title and Price of the book : ";
    cin>>b.book_id>>b.title>>b.price;
    return(b);
}
void display(book b)
{
    cout<<"Book ID is "<<b.book_id<<endl<<"Book Title is : "<<b.title<<endl<<"Book Price is : "<<b.price<<endl;
}
