#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n%2==0)
    {
        cout<<"Enter an Odd Number"<<endl;
    }
    else
    {
        while(i<=n)
        {
            sum=(i*i)+sum;
            i+=2;
        }
        cout<<"The Summation is :"<<sum<<endl;
    }
    return 0;
}
