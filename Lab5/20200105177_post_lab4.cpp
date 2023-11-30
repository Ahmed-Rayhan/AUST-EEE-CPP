#include<iostream>
#include<cmath>
using namespace std;

void compute_sphere (float& v, float& s, float r)
{
    float pi=3.1416;
    v=(4/3)*(pi*r*r,r);
    s= 4 *pi*r*r;
}

int main()

{
    float v, s, r;
    cout<<"Enter sphere radius, r: ";
    cin>>r;
    compute_sphere(v,s,r);
    cout<<"\n Sphere volume : "<< v;
    cout<<"\n Sphere surface : "<< s;

    return 0;
}
