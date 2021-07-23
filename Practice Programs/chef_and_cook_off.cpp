#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int arr[5], count = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                count++;
        }
        if (count == 0)
            cout << "Beginner" << endl;
        else if (count == 1)
            cout << "Junior Developer" << endl;
        else if (count == 2)
            cout << "Middle Developer" << endl;
        else if (count == 3)
            cout << "Senior Developer" << endl;
        else if (count == 4)
            cout << "Hacker" << endl;
        else if (count == 5)
            cout << "Jeff Dean" << endl;
    }
    return 0;
}