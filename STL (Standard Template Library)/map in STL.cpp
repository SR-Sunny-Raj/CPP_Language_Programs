#include <iostream>
#include <map>
using namespace std;
//map class in STL in C++
int main()
{
    map<int, string> m;
    m[111] = "Sunny"; //We can initialize like this
    m[134] = "Raj";
    m[213] = "Ankita";
    m[256] = "Deepu";
    m[300] = "Dhanno";

    map<int, string> mn{{111, "Sunny"}, {134, "Raj"}, {213, "Ankita"}, {256, "Deepu"}, {300, "Dhanno"}}; //We can also initialize like this
    cout << m[111] << endl;
    map<int, string>::iterator p = m.begin(); //Using iterator to access the values
    while (p != m.end())
    {
        cout << p->second << "    ";
        p++;
    }
    cout << endl;
    cout << m.size() << endl;                  //Checking the size of the map
    cout << m.at(256) << endl;                 //Accessing value placed at a particular index
    cout << m.empty() << endl;                 //Checking if the map is empty or non-empty
    m.insert(pair<int, string>(121, "Mummy")); //Inserting values in the map
    cout << m.size() << endl;
    map<int, string>::iterator q = m.begin();
    while (q != m.end())
    {
        cout << q->second << "  ";
        q++;
    }
    m.clear(); //Clearing the entire map
    map<int, string>::iterator s = m.begin();
    while (s != m.end())
    {
        cout << s->second << "  ";
        s++;
    }
    return 0;
}
