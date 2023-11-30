#include <iostream>
using namespace std;


void get(double *a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"No "<<i+1<<" :";
        cin>>*a[i];
    }
}

void print(double *a[], int m)
{

    for (int i = 0; i < m; i++)
        cout << *a[i] << " ";
    cout << endl;
}

int main()
{
    int num;
    cout<<"Enter the amount of numbers : ";
    cin>>num;
    double arr[num];

    double*p[num];
    for(int i=0; i<num; i++)
        p[i]=&arr[i];

    cout<<"Entered  number: \n";
    get(p,num);
    cout<<endl;
    cout<<"Output: "<<endl;

    print(p, num);
    return 0;

}




