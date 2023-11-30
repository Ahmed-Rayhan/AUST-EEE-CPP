#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter your marks : ";
    cin>>m;

    if(m>0 && m<100)
    {
        if(m>79)
            cout<<"A+";
        else if(m>74)
            cout<<"A";
        else if(m>69)
            cout<<"A-";
        else if(m>64)
            cout<<"B+";
        else if(m>59)
            cout<<"B";
        else if(m>54)
            cout<<"B-";
        else if(m>49)
            cout<<"C+";
        else if(m>44)
            cout<<"C";
        else if(m>39)
            cout<<"D";
        else if(m<40)
            cout<<"F";
    }
    else
        cout<<"Invalid marks";

    return 0;
}
