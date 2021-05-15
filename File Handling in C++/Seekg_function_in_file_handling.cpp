#include<iostream>
#include<fstream>
using namespace std;
//Seekg() function in file handling in C++
int main()
{
    ifstream fin;
    fin.open("file1.txt");
    cout<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(0);                 //To seek the get pointer to the beginning
    cout<<"\n"<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(-2,ios_base::end);
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    fin.close();
    return 0;
}
