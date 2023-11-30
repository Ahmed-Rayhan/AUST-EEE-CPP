#include<iostream>
using namespace std;
int main()
{
    int n,s;
    float avg,sum=0.0;
    cout<<"Enter an Integer more than one digit : ";
    cin>>n;
    for(int i=1; n!=0; i++)
    {
        s=n%10;
        n=n/10;
        sum=s+sum;
        avg=sum/i;
    }
    cout<<"Summation : "<<sum<<endl;
    cout<<"Average : "<<avg<<endl;
    return 0;
}
