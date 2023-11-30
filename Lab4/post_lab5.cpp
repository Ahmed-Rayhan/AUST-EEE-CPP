#include<iostream>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    cout<<"Enter an Even Number : ";
    cin>>n;
    if(n<0 || n%2==1)
    {
        cout<<"Invalid Input!! "<<endl;
    }
    else
    {
        do
        {
            sum=sum+i;
            if( i < n)
                cout<<i<<"+";
            else
                cout<<i<<" ";
            i=i+2;
        }
        while(i<=n);
        cout<<endl;
        cout<<"Total Summation is : "<<sum<<endl;
    }
    return 0;
}

