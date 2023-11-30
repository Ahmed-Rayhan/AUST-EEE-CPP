#include<iostream>
using namespace std;
int main()
{
    int n,i=1,n1=1,n2=0,next=0;
    cout<<"Enter how many elements do you want to see : ";
    cin>>n;
    do
    {
        if(i<n)
            cout<<next<<"+";
        else
            cout<<next<<" ";
        next=n1+n2;
        n1=n2;
        n2=next;
        i++;
    }
    while(i<=n);
    return 0;
}

