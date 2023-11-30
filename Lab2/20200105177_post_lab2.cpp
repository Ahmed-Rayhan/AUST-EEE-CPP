#include<iostream>
using namespace std;

int main()
{
    int a,b, area,perimeter;

    cout<<"Enter width and length of the rectangle: ";
    cin>>a>>b;
    area=a*b;
    perimeter= 2*(a+b);


    cout<<"\n\t area of the rectangel: "<<area;
    cout<<"\n\t perimeter of the rectangel: "<<perimeter;

    return 0;
}

