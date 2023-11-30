#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
   int n,i;
   bool isprime=false;
   cout<<"Enter any number : ";
   cin>>n;
   if(n<=0||n==1)
   {
       cout<<"Enter any without 0 and 1"<<endl;
       isprime=true;
   }
   else{
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
         isprime=true;
        }
        i++;

    }
   }
   if(isprime)
   {
       cout<<"Not Prime"<<endl;
   }
   else
   {
       cout<<"Prime"<<endl;
   }
}
