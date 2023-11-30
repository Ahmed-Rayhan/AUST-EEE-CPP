#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    float a,b,c;

    cout<<"Enter length of 2 legs of the triangle ";
    cin>>a>>b;

    c= sqrt((a*a)+(b*b));

    cout<<"\n\t third leg"<<c<< " unit" ;


    return 0;
}



