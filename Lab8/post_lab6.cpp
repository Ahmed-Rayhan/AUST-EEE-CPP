#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string reverse(string s)
{
	int l = 0, i = 0, n = s.size();
	while (s[i] == ' ')
		i++;
	l = i;
	while (i < n)
	{
		if (i + 1 == n || s[i] == ' ')
		{
			int j = i - 1;
			if (i + 1 == n)
				j++;

			while (l < j)
				swap(s[l++], s[j--]);

			l = i + 1;
		}
		if (s[l] == ' ' && i > l)
			l = i;

		i++;
	}

	return s;
}

int main()
{

	string str = "Today Is Friday";

	cout<<"\n Entered text: "<<str<<endl;

	str = reverse(str);
	cout <<"\n Reversed text: "<< str;


    cout<<"\n\n\n\n";
	return 0;

}
