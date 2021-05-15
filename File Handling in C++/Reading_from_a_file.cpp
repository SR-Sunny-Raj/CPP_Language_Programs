#include<iostream>
#include<fstream>
using namespace std;
//File Handling
int main()
{
    ifstream obj;
    obj.open("file2.txt");
    char ch;
    ch = obj.get();
    //obj>>ch;               ------> Here we wont use this because this can't read the blank spaces
    while(!obj.eof())
    {
        cout<<ch;
        ch = obj.get();
        //obj>>ch;
    }
    obj.close();
    return 0;
}
