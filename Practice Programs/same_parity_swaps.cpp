#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

void solution()
{
    int N;
    cin >> N;
    string str;
    cin >> str;
    int c0 = 0, c1 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1' && (i % 2 == 0))
        {
            c0++;
        }
        else if (str[i] == '0' && (i % 2 == 1))
        {
            c1++;
        }

        if (str[i] == '1' && (i % 2 == 1))
        {
            c0++;
        }
        else if (str[i] == '0' && (i % 2 == 0))
        {
            c1++;
        }
    }

    int res = 0;

    int X = str.length();
    if (X & 1)
        X--;
    bool flag1 = true, flag2 = true;
    for (int i = 0; i <= X - 2; i += 2)
    {
        if (str[i] == '0' && str[i + 1] == '1')
        {
        }
        else
        {
            flag1 = false;
        }

        if (str[i] == '1' && str[i + 1] == '0')
        {
        }
        else
        {
            flag2 = false;
        }
    }

    if (flag1)
    {
        cout << X / 2 << endl;

        return;
    }
    else if (flag2)
    {
        if (str[X] == '1')
        {
            cout << (X / 2) << endl;
            return;
        }
    }

    if (c0 == c1)
    {
        res = c0 - 1;
    }
    else if (c0 < c1)
    {
        res = c0;
    }
    else if (c0 > c1)
    {
        res = c1;
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solution();
    }

    return 0;
}

void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne = 0,
         indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
    {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
        {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    while (indexOfSubArrayOne < subArrayOne)
    {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    while (indexOfSubArrayTwo < subArrayTwo)
    {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}