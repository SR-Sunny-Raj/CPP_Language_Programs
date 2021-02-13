#include<iostream>
#include<fstream>
using namespace std;
//File Handling modes
int main()
{
    ofstream obj;
    obj.open("file1.txt",ios::app|ios::binary);
    obj<<"Myself\nSunny Raj";
    obj.close();
    return 0;
}
