#include <iostream>
#include <list>
using namespace std;
//List in STL in C++
int main()
{
    list<int> l1{50, 70, 20, 10, 60};
    list<string> l2{"India", "Mumbai", "Bihar", "Kolkate", "Hyderabad"};
    cout << "Size of list 1 is -: " << l1.size() << endl; //Size() function
    list<int>::iterator p = l1.begin();
    while (p != l1.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << "\nAfter pushing values -: " << endl;
    l1.push_back(8); //push front() and push_back() function
    l1.push_front(1);
    list<int>::iterator q = l1.begin();
    while (q != l1.end())
    {
        cout << *q << " ";
        q++;
    }
    cout << "\nCurrent Size of the list is -: " << l1.size() << endl;
    cout << "\nAfter sorting the lsit -: " << endl;
    l1.sort(); //sort() function
    list<int>::iterator r = l1.begin();
    while (r != l1.end())
    {
        cout << *r << " ";
        r++;
    }
    cout << "\nAfter poping values -: " << endl;
    l1.pop_back(); //pop_front() and pop_back() function
    l1.pop_front();
    list<int>::iterator s = l1.begin();
    while (s != l1.end())
    {
        cout << *s << " ";
        s++;
    }
    cout << "\nAfter reversing the list -: " << endl;
    l1.reverse(); //reverse() function
    list<int>::iterator t = l1.begin();
    while (t != l1.end())
    {
        cout << *t << " ";
        t++;
    }
    cout << "\nAfter removing some values from the list -: " << endl;
    l1.remove(20); //remove() function
    list<int>::iterator u = l1.begin();
    while (u != l1.end())
    {
        cout << *u << " ";
        u++;
    }
    cout << "\nAfter clearing all the elements from the list the list will become empty -:" << endl;
    l1.clear(); //clear() function
    list<int>::iterator v = l1.begin();
    while (v != l1.end())
    {
        cout << *v << " ";
        v++;
    }
    return 0;
}
