#include <iostream>
#include <cmath>
using namespace std ;

double function1(int q, int r)
{
    int a,p,f ;
    float temporary,sum ;
    for (a=1,sum=1, f=1 ; a<r ; a++){
    p= pow(q,a);
    f= f*a ;                                ///1+ x^1/1! + x^2/2!
    temporary = (float) p/f ;

    sum=sum+temporary ;

    return sum;}
}

int main()
{
    int x,n;
    cout << " Enter The value of X = "<< endl;
    cin>>x  ;
    cout << " Enter Your Terms : "<< endl ;
    cin>>n;
    cout << " The Summation is : " << function1(x,n) << endl ;
    return 0 ;
}
