#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i,count=0;

    cout<<"Enter the string : ";
    getline(cin,str);
    for(i=0; str[i]; i++)
    {

        if(str[i]=='a'|| str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u' ||str[i]=='U')
        {
            count++;
        }
    }

    cout<<"Total number of vowels :  "<<count;;
    return 0;
}
