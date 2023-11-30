#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter an Integer : ";
    cin>>n;
    sum=0;
    for(int i=1; n>0; i++)
    {
        sum=sum+n;
        cout<<"The Total Summation is : "<<sum<<endl;
        cout<<"Enter an Integer : ";
        cin>>n;
    }
    if(n<0)
    {
        cout<<"Loop breaked"<<endl;
        cout<<"Total Sum is : "<<sum<<endl;
    }
    return 0;
}
