#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int p[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
            if (p[j] > p[j+1])
                swap(&p[j], &p[j+1]);
}

void print(int p[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << p[i] << " ";
    cout << endl;
}


int main()
{
    int n;
    cout<<"How many numbers : ";
    cin>>n;
    int p[n];
    for(int i=0; i<n; i++)
    {
        cout<<"No. "<<i+1<<" : ";
        cin>>p[i];
    }
    sort(p, n);
    cout<<"Sorted output: \n";
    print(p, n);
    return 0;
}
