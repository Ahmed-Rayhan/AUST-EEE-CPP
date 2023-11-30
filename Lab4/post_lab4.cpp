#include<iostream>
using namespace std;
int main()
{
    int num,i=1,fact=1;
    cout<<"Enter a Number : " ;
    cin>>num;
    if(num==0)
    {
        cout<<"Invalid Input"<<endl;
    }
    else
    {
        do
        {
            fact=fact*i;
            i++;
        }
        while(i<=num);
        cout<<"The Factorial is : "<<fact<<endl;
    }
    return 0;
}
