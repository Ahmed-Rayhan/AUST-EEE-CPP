#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void print(vector<string> x)
{
    for (int i=0; i<x.size(); i++)
    {
        cout<<x[i]<< " ";
    }
}
void setlist(vector<string> &shop)
{
    shop.push_back("eggs ");
    shop.push_back("milk ");
    shop.push_back("sugar ");
    shop.push_back("chocolate ");
    shop.push_back("flour ");

}

int main()
{   ///Ans:A
    vector<string> a;
    if(a.empty()==true)
        {
            cout<<"empty vector\n";
            }
    else
        cout<<"Non empty";
    print(a);

    ///Ans:B
    cout<<"\nShopping list: ";
    vector<string>shop;
    setlist(shop);
    print(shop);
    ///Ans:C
    cout<<"\nLast element removed : ";
    shop.pop_back();
    print(shop);
    ///Ans:D
    cout<<"\n list with new item : ";
    shop.insert(shop.end(),"coffee ");
    print(shop);

    ///Ans:E
    cout<<"\nFind sugar ";
    vector<string>::iterator itf;
    itf=find(shop.begin(), shop.end(),"sugar ");
    int dis=distance(shop.begin(), itf);
    cout<<"\nIndex: "<<dis<<endl;
    shop.erase(shop.begin()+dis);
    shop.insert(itf,"honey" );
    print(shop);

    ///Ans:F
    cout<<"\n \nFind milk and delete it\n "<<endl;
    vector<string>::iterator itm;
    itm=find(shop.begin(), shop.end(),"milk");
    int dist=distance(shop.begin(), itm);

    shop.erase(shop.begin()+dist);

    print(shop);

    ///Ans:G
    cout<<"\n \nFind milk and delete it\n "<<endl;
    vector<string>::iterator itm;
    itm=find(shop.begin(), shop.end(),"milk");
    int dist=distance(shop.begin(), itm);

    shop.erase(shop.begin()+dist);

    print(shop);

    cout<<endl<<endl<<endl<<endl;

}
