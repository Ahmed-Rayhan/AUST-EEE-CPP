#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,d,e,large,small;
    cout<<"Enter Five integers"<<endl;

    cin>>a>>b>>c>>d>>e;


    large = (a > b && a > c && a > d && a > e ) ?
                a : ((b > c && b > d && b > e) ?
                b : (c > d && c > e) ?
                c:  (d > e ? d : e));

    small = (a < b && a < c && a < d && a < e )?
            a : ((b < c && b < d && b < e) ?
                 b : (c < d && c < e) ?
                 c:  (d < e ? d : e));

    cout<<"Largest is "<<large<<endl;
    cout<<"Smallest is "<<small<<endl;

    return 0;


}
