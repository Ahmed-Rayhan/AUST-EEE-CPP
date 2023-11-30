#include<iostream>
#include<cmath>
using namespace std;

int main()

{
    int i,num,x;
    int a=1,sum=0;
    cout<<"Input how many number of sum : ";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        if(i%2!=0)
        {
        x=a*pow(i,2);
        sum=sum+x;
        a=a*-1;
        }
    }
    cout<<"The Sum of the series is : "<<sum<<endl;

    return 0;
}

