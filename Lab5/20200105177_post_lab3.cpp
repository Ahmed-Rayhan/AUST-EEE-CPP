#include<iostream>
#include<cmath>
using namespace std;

int square (int n)
{
    int r,i;
    for(i=1, r=1; r<n; i++)
    {
        r=pow(i,2);
    }
    if(r==n)
        cout<<n<<" is a perfect square";
    else
        cout<<n<<" is not a perfect square";
}

int main()
{
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    square (a);

    return 0;
}
