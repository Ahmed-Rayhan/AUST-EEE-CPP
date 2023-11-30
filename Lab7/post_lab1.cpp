#include<iostream>
using namespace std;

float  sum(float *p[],int n)
{
    float sum= 0.0;
    for (int i=0; i<n; i++)
        sum += *p[i];
    return sum;
}
int main()
{
    int x, n;

    cout << "Sum of how many numbers?" << endl;
    cin>> n;

    float arr[n];
    cout << "Enter " << n << " numbers to sum :" << endl;
    for (x = 0; x < n; x++)
    {
        cout<<"No "<<x+1<<" : ";
        cin >> arr[x];
    }

    cout << "Stored : ";
    for (x = 0; x < n; x++)
    {
        cout << arr[x] << " ";
    }

    float * a[n];
    for (int i=0; i<n; i++)
        a[i]=&arr[i];
    cout << endl;
    cout<<"The sum is "<<sum(a,n);
    return 0;
}


