#include<iostream>
using namespace std;
//Functions in structure
struct book
{
    int book_id;
    char title[20];
    float price;
    void input()
    {
        cout<<"Enter Book ID , Title and Price : ";
        cin>>book_id>>title>>price;
    }
    void display()
    {
        cout<<"Book ID is : "<<book_id<<endl<<"Book Title is : "<<title<<endl<<"Book Price is : "<<price;
    }
};
int main()
{
    book b1;
    b1.input();
    b1.display();
    return 0;
}
