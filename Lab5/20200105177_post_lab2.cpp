#include<iostream>
using namespace std;

int min (int a, int b, int c, int  d)
{
    if( a<b && a<c && a<d )
    {
        return a;
    }
    else if(b<a && b<c && b<d)
    {
        return b;
    }
    else if(c<a && c<b && c<d)
    {
        return c;
    }
    else if(d<a && d<b && d<c)
        return d;

}

int main()
{
    int w,x,y,z;
    cout<< "Enter four number to find minimum "<<endl;
    cin>>w>>x>>y>>z;
    cout<<"\n Minimum number is "<<min(w,x,y,z);
}
