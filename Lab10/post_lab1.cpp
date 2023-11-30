#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int lines = 0,word=0,letter=0;
    string line,filename;

    ifstream file("text.txt");
    while (getline(file, line))
        {
            lines=lines+1;

            for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ' || line[i] == '\t')
                word=word+1;
        }

        for (int i = 0; i < line.length(); i++)
        {
            if(line[i]!=' ')
            letter=letter+1;
        }


        }

    cout << "Total lines in the file : " << lines << endl;
    cout << "Total word in the file : " << word << endl;
    cout << "Total letters in the file : " << letter << endl;

    return 0;
}
