// Activity Search_213.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int arr[20];
int n;
int i;
void input()
{
    while (true)
    {
     cout << "Enter the number of elements in the array : ";
     cin >> n;
     "\nArray shoould have minimum 1 and maximum 20 elements.\n\n";
     if ((n > 0) && (n <= 20))
     break;
     else
         cout << "\nArray shoould have minimum 1 and maximum 20 elements.\n\n";

    }
    cout << "\n------------------\n";
    cout << "Enter array elements \n";
    cout << "\n------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}




int main()
{
    std::cout << "Hello World!\n";
}