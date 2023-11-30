//AhmedRayhan
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,x1,x2;
    cout<<"Enter equations a, b, c: "<<endl;
    cin>>a>>b>>c;
    cout<<"Given equation is "<<a<<"*x*x+"<<b<<"*x+"<<c<<"=0"<<endl;

    x1=(-b + (sqrt((b*b)-4*a*c))/(2*a));
    x1=(-b - (sqrt((b*b)-4*a*c))/(2*a));

    cout<<"\n\t solve for the equation "<<x1<< ","<<x2 ;


    return 0;
}
