#include<iostream>
using namespace std;

int swap(int *a[],int o)

{
    for(int i=o; i>=0; --i)

        cout<< *a[i-1]<<" ";

}

int main()
{
    int n;
    cout<<"Enter how many number to swap: ";
    cin>>n;

//Input Array
    int a[n];
    cout<<"Enter "<<n<<" number: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"No "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<endl;


    cout<<"Before Swap: ";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;


    int*p[n];
    for(int i=0; i<n; i++)
        p[i]=&a[i];

    cout<<"After Swap:"<<swap(p,n);
}

