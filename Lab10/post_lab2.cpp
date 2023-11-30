#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ifstream name("name.txt");
    string n1,n2,n3;
    while(name)
    {
        name>>n1;
        name>>n2;
        name>>n3;
        cout<<n3<<" "<<n1<<" "<<n2<<" "<<endl;
        if(name.eof())
            break;

    }
    name.close();
}

