#include<iostream>
#include<cmath>
using namespace std;

int main()

{
    int i,num,x;
    int sum=1;
    cout<<"Input how many numbers: ";
    cin>>num;

    for(i=1;i<=num;i++)

        {
            if(i%2==0)
            {
            x=i*i;
            sum=sum+x;
            }
        }
       cout<<"Summation: "<<sum;

return 0;
}

