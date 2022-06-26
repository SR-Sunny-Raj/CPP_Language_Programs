#include <bits/stdc++.h>
#define S string
#define I int
using namespace std;

// int binarySearch(int arr[], int l, int r, int x)
// {
//     if (r >= l)
//     {
//         int mid = l + (r - l) / 2;
//         if (arr[mid] == x)
//             return mid;
//         if (arr[mid] > x)
//             return binarySearch(arr, l, mid - 1, x);
//         return binarySearch(arr, mid + 1, r, x);
//     }
//     return -1;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    S str;
    S str2;
    cin >> str >> str2;
    I pos = 0;
    for (I i = 0; i < (I)str2.length(); i++)
    {
        switch (str2[i])
        {
        case 'R':
            if (pos + 1 < (I)str.length())
                pos++;
            break;
        case 'L':
            if (pos > 0)
                pos--;
            break;
        case 'T':
            if (str[pos] != '9')
                str[pos]++;
            break;
        case 'D':
            if (str[pos] != '0')
                str[pos]--;
            break;
        case 'S':
            i++;
            S Number;
            for (i; i < (I)str2.length() && str2[i] >= '0' && str2[i] <= '9'; i++)
                Number.push_back(str2[i]);
            i--;
            I x = stoi(Number);
            swap(str[pos], str[x - 1]);
            break;
        }
    }
    cout << str << endl;
}
// void merge(int array[], int const left, int const mid, int const right)
// {
//     auto const subArrayOne = mid - left + 1;
//     auto const subArrayTwo = right - mid;
//     auto *leftArray = new int[subArrayOne],
//          *rightArray = new int[subArrayTwo];
//     for (auto i = 0; i < subArrayOne; i++)
//         leftArray[i] = array[left + i];
//     for (auto j = 0; j < subArrayTwo; j++)
//         rightArray[j] = array[mid + 1 + j];

//     auto indexOfSubArrayOne = 0,
//          indexOfSubArrayTwo = 0;
//     int indexOfMergedArray = left;
//     while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
//     {
//         if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
//         {
//             array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
//             indexOfSubArrayOne++;
//         }
//         else
//         {
//             array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
//             indexOfSubArrayTwo++;
//         }
//         indexOfMergedArray++;
//     }
//     while (indexOfSubArrayOne < subArrayOne)
//     {
//         array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
//         indexOfSubArrayOne++;
//         indexOfMergedArray++;
//     }
//     while (indexOfSubArrayTwo < subArrayTwo)
//     {
//         array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
//         indexOfSubArrayTwo++;
//         indexOfMergedArray++;
//     }
// }
// void mergeSort(int array[], int const begin, int const end)
// {
//     if (begin >= end)
//         return;

//     auto mid = begin + (end - begin) / 2;
//     mergeSort(array, begin, mid);
//     mergeSort(array, mid + 1, end);
//     merge(array, begin, mid, end);
// }