#include<iostream>
#include<string>
using namespace std;

void menu();

class dayType
{
    string Wdays[7];
    int i;
    string day;
    string prDay;
    string NxtDay;
    string AddDays;
public:
    dayType(string);
    string setday();
    string preday();
    void Nextday();
    string add(int n);
    void print();
};
int main()
{
    int n;
    string d;
    menu();
    cout <<"Enter the day :";
    cin>> d;
    dayType Da(d);
    Da.setday();
    Da.preday();
    Da.Nextday();

    cout <<"Enter the No. of days to add :";
    while (!(cin >> n) ||n<0)
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout <<"Invalid data type! \nPlease enter No. of days to add again :";

    }
    Da.add(n);
    Da.print();
    system("pause");
    return 0;

}
dayType::dayType(string i): day(i)
{

    Wdays[0] = "Mon";
    Wdays[1] = "Tues";
    Wdays[2] = "Wednes";
    Wdays[3] = "Thurs";
    Wdays[4] = "Fri";
    Wdays[5] = "Satur";
    Wdays[6] = "Sun";
}

string dayType::setday()
{
    if (day == Wdays[0])
    {
        i = 0;
    }
    else if (day == Wdays[1])
    {
        i = 1;
    }
    else if (day == Wdays[2])
    {
        i = 2;
    }
    else if (day == Wdays[3])
    {
        i = 3;
    }
    else if (day == Wdays[4])
    {
        i = 4;
    }
    else if (day == Wdays[5])
    {
        i = 5;
    }
    else if (day == Wdays[6])
        i = 6;
    else
    {
        day = "Invalid Input";
        i = 7;
    }
    return day;
}
string dayType::preday()
{
    if (i == 0)
        prDay = Wdays[6];
    else if (i == 7)
        prDay = "Invalid Input";
    else
        prDay = Wdays[i - 1];
    return prDay;
}
void dayType::Nextday()
{
    if (i == 6)
        NxtDay = Wdays[0];
    else if (i == 7)
        prDay = "Invalid Input";
    else
        NxtDay = Wdays[i + 1];

}
string dayType::add(int n)
{
    n = n + i;
    while (n>= 7)
    {
        n = n - 7;
    }
    if (i == 7)
        Wdays[n] = "Invalid Input ";
    return AddDays = Wdays[n];
}
void dayType::print()
{
    cout << endl <<"\tDay="<< day <<"day"<< endl;
    cout <<"\tPrevious day :"<< prDay <<"day"<< endl;
    cout <<"\tNext day :"<< NxtDay <<"day"<< endl;
    cout <<"\tAfter Adding Days :"<< AddDays <<"day"<< endl;
}
void menu()
{

    cout <<"\tEnter 'Sun' for 'Sunday'"<< endl;
    cout <<"\tEnter 'Mon' for 'Monday'"<< endl;
    cout <<"\tEnter 'Tues' for 'Tuesday'"<< endl;
    cout <<"\tEnter 'Wednes' for 'Wednesday'"<< endl;
    cout <<"\tEnter 'Thurs' for 'Thursday'"<< endl;
    cout <<"\tEnter 'Fri' for 'Friday'"<< endl;
    cout <<"\tEnter 'Satur' for 'Saturday'"<< endl;
}
