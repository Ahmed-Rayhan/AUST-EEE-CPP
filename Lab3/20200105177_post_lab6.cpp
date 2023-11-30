#include<iostream>
using namespace std;

int main()
{
    int month;
    cout<<"1.January\n";
    cout<<"2.February\n";
    cout<<"3.March\n";
    cout<<"4.April\n";
    cout<<"5.May\n";
    cout<<"6.June\n";
    cout<<"7.July\n";
    cout<<"8.August\n";
    cout<<"9.September\n";
    cout<<"10.October\n";
    cout<<"11.November\n";
    cout<<"12.December \n\n";

    cout<<"Enter The Month number: ";
    cin>>month;
switch(month)
    {
    case 1:
    {
        cout<<"January"<<endl;
        cout<<"This Month has 31 days"<<endl;
        break;
    }
    case 2:
    {
        cout<<"February"<<endl;
        cout<<"The month has 28 or 29 days according to leap year."<<endl;
        break;
    }
    case 3:
    {
        cout<<"March"<<endl;
        cout<<"This Month has 31 days"<<endl;
        break;
    }
    case 4:
    {
        cout<<"April"<<endl;
        cout<<"This Month has 30 days"<<endl;
        break;
    }
    case 5:
    {
        cout<<"May"<<endl;
        cout<<"This Month has 31 days"<<endl;
        break;
    }
    case 6:
    {
        cout<<"June"<<endl;
        cout<<"This Month has 30 days"<<endl;
        break;
    }
    case 7:
    {
        cout<<"July"<<endl;
        cout<<"This Month has 31 days"<<endl;
        break;
    }
    case 8:
    {
        cout<<"August"<<endl;
        cout<<"This Month has 31 days"<<endl;
        break;
    }
    case 9:
    {
        cout<<"September"<<endl;
        cout<<"This Month has 30 days"<<endl;
        break;
    }
    case 10:
    {
        cout<<"October"<<endl;
        cout<<"This Month has 31 days"<<endl;
        break;
    }
    case 11:
    {
        cout<<"November"<<endl;
        cout<<"This Month has 30 days"<<endl;
        break;
    }
    case 12:
    {
        cout<<"ecember"<<endl;
        cout<<"This Month has 31 days"<<endl;
        break;
    }
    default :
    {
        cout<<"Invalid Input"<<endl;
    }
    }
    return 0;
}


