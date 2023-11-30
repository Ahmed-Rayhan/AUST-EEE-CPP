#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    float v,i,z,p,a,pf,s,Z,pi=3.1416;
    v=120;
    z=8;
    a=30*(pi/180);
    pf=cos(0+a);
    i=(v/z);
    p=0.5*v*i*cos(a);
    s=0.5*v*i*sin(a);
    cout<<"Result : \n";
    cout<<"\tReal Power : "<<p<<" Watt"<<endl;

    cout<<"\tApparent Power : "<<s<<" VA"<<endl;

    cout<<"\tPower Factor : "<<pf<<endl;
    cout<<endl<<endl;
    return 0;
}

