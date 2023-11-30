//Ahmed Rayhan
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int add,sub, multi;
    float div;
    cout<<"Enter two decimal number";
    cin>>a>>b;
    add= a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;

    cout<<"\n\t Result: "<<endl;
    cout<<"\n\t Addison: "<<add;
    cout<<"\n\t Substraction: "<<sub;
    cout<<"\n\t multiplication: "<<multi;
    cout<<"\n\t division: "<<div;
    return 0;
}
