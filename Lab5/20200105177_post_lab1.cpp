#include<iostream>
using namespace std;

float average (float x1, float x2, float x3, float x4)
{
    return ((x1+x2+x3+x4)/4);;
}

int main()
{
    int a,b,c,d;
    cout<<"Enter four numbers to find average : "<<endl;
    cin>>a>>b>>c>>d;

    cout<<"Average of given 4 numbers is : "<< average(a,b,c,d);
    return 0;
}
