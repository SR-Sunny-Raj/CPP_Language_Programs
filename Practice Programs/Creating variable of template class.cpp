#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//creating variable of template class
template <class T>
void print(T arr[], int size) {
 for (size_t i = 0; i < size; ++i)
 cout << arr[i] << " ";
 cout << endl;
}
int main() {
 int num = 6;
 int arr[num] = { 10, 90, 1, 2, 3 };
 sort(arr, arr + num);
 print(arr, num);
 string str[num] = { "\nC++ Programming is best", "\nC++ Programming", "\nwww.C++Programming.com" };
 sort(str, str + num);
 print(str, num);
 float float_arr[num] = { 32.0, 12.76, 10.00 };
 sort(float_arr, float_arr+num);
 print(float_arr, num);
 return 0;
}
