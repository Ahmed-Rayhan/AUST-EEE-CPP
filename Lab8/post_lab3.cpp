#include<iostream>>
using namespace std;
int main()
{

	char str1[50] = "AUST ", str2[50] = "EEE";
	char str3[50];

	int i = 0, j = 0;

	cout<<"\nFirst string: "<<str1<<endl;
	cout<<"\nSecond string:"<<str2<<endl;

	while (str1[i] != '\0') {
		str3[j] = str1[i];
		i++;
		j++;
	}

    i = 0;
	while (str2[i] != '\0') {
		str3[j] = str2[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	cout<<"\n Result string: "<< str3;

	return 0;
}

