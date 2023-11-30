#include<iostream>
using namespace std;
int main()
{
    int array[50], n, i;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "\nEnter elements: ";
    for (i = 0; i < n; i++)
        cin >> array[i];

    cout << "Original array: ";

    for (int i = 0; i < n; i++)
        cout << array[i] << " ";


    for (int i = 0; i < n; i++)
       for (int j = i + 1; j < n; j++)
            if (array[i] == array[j])
            {
                cout << "\nFirst repeating integer is " << array[i];
                return 0;
            }
}
