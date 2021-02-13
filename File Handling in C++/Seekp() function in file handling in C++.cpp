#include<iostream>
#include<fstream>
using namespace std;
//Seekp() function in file handling in C++
int main()
{
    ofstream fout;
    fout.open("file2.txt",ios::ate|ios::app);
    cout<<fout.tellp();
    fout<<"Sunny";
    cout<<"\n"<<fout.tellp();
    fout.seekp(0);
    fout<<"NEW";
    cout<<"\n"<<fout.tellp();
    fout.close();
    return 0;
}
