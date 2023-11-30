#include<iostream>
#include<string>
using namespace std;
class roman_type
{
public:
    void convert(string r);
};
int value(char m)
{
    if (m == 'I')
        return 1;
    if (m == 'V')
        return 5;
    if (m == 'X')
        return 10;
    if (m == 'L')
        return 50;
    if (m == 'C')
        return 100;
    if (m == 'D')
        return 500;
    if (m == 'M')
        return 1000;

    return 0;
}


void roman_type::convert(string r)
{
    int sum=0;
    for(int i=0; i<=r.length(); i++)

    {
        int s=value(r[i]);
        sum=sum+s;
    }
    cout<<"DECIMAL: ";
    cout<<sum;

}


int main()
{
    string a;
    cout<<"Enter a Roman Number: ";
    getline(cin,a);
    roman_type temp;
    temp.convert(a);
    return 0;
}
