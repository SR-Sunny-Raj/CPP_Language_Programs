#include<iostream>
#include<fstream>
using namespace std;
//tellp() in file handling in C++
int main()
{
    ofstream fout;
    fout.open("file1.txt",ios::app);
    int pos;
    pos = fout.tellp();
    cout<<pos;
    fout<<"Sunny";
    pos = fout.tellp();
    cout<<pos;
    fout.close();
    return 0;
}
