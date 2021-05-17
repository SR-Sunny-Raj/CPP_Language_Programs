#include<iostream>
using namespace std;
//Access specifiers in structure C++
struct book
{
    private:
    int book_id;
    char title[20];
    float price;
    public:
    void input()
    {
        cout<<"Enter Book ID , Title and Price : ";
        cin>>book_id>>title>>price;
    }
    void display()
    {
        cout<<"Book ID is : "<<book_id<<endl<<"Title is : "<<title<<endl<<"Price is : "<<price;
    }
};
int main()
{
    book b1;
    b1.input();
    b1.display();
    return 0;
}
