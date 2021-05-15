#include<iostream>
#include<fstream>
using namespace std;
//tellg() in file handling in C++
int main()
{
    ifstream fin;
    fin.open("file1.txt");
    int pos;
    pos = fin.tellg();
    cout<<pos;
    char ch;
    fin>>ch;
    pos = fin.tellg();
    cout<<pos;
    fin>>ch;
    pos = fin.tellg();
    cout<<pos;
    fin.close();
    return 0;
}
