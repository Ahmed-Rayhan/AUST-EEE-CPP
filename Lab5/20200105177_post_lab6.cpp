#include<iostream>
#include<cmath>
using namespace std;


double power (double x, int p)
{
    while (p != 0) {
        x *= x;
        --p;
    }
    /*for(int i=1; i<p; i++)
    {
        x*=x;
    }*/
    return x;

}

int main()
{
    float a, n;
    cout<<"Enter base: "<<endl;
    cin>>a;
    cout<<"Enter power: ";
    cin>>n;

    cout<<a<<" raised to the power "<<n<< " is "<<power(a,n)<<endl;
    cout<<pow(a,n);
    return 0;
}
