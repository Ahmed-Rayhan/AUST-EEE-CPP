#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age>0)
    {
        if(age < 18)
            cout<<"You are a child";
        else if(age>18 && age <65)
            cout<<"You are an adult";
        else if(age>65)
            cout<<"You are senior citizen";
    }
    else
        cout<<"Invalid age ";



    return 0;

}
