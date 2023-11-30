#include<iostream>
using namespace std;
float equation(float a5,float a4,float a3,float a2,float al, float a0)
{

    cout<<a5<<"(x^5)+"<<a4<<"(x^4)+"<<a3<<"(x^3)+"<<a2<<"(x^2)+"<<al<<"x+"<<a0;

}

float result(float b5,float b4,float b3,float b2,float b1, float b0,float p)
{
    float v;
    v=((((b5*p + b4)*p + b3)*p + b2)*p +b1)*p+b0;
return v;
}

int main()
{
    float c5,c4,c3,c2,c1,c0,eqn,r;
    cout<<"Enter First coefficient:";
    cin>>c5;
    cout<<endl;
    cout<<"Enter Second coefficient:";
    cin>>c4;
    cout<<endl;
    cout<<"Enter Second coefficient: ";
    cin>>c4;
    cout<<endl;
    cout<<"Enter Third coefficient: ";
    cin>>c3;
    cout<<endl;
    cout<<"Enter Fourth coefficient: ";
    cin>>c2;
    cout<<endl;
    cout<<"Enter Fifth coefficient: ";
    cin>>c1;
    cout<<endl;
    cout<<"Enter Sixth coefficient: ";
    cin>>c0;
    cout<<endl;
    cout<<"Equation:";
    eqn= equation(c5,c4,c3,c2,c1,c0);
    cout<<endl;
    float x;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<endl;
    r=result(c5,c4,c3,c2,c1,c0,x);
    cout<<"Result:"<<r;

    return 0;

}
