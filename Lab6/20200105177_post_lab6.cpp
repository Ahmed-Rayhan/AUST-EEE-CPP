#include<iostream>
using namespace std;
void rearrange(int a[], int n)
{

	int temp[n];

	int small = 0, large = n - 1;
	int flag = true;

	for (int i = 0; i < n; i++) {
		if (flag)
			temp[i] = a[large--];
		else
			temp[i] = a[small++];

		flag = !flag;
	}

	for (int i = 0; i < n; i++)
		a[i] = temp[i];
}

int main()
{
	int a[] = { 72,323,121,213,444,3,65,364,423,76};
	int n = sizeof(a) / sizeof(a[0]);

	cout << "\n Input Array"<<endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	rearrange(a, n);

	cout << "\n\n New Array"<<endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}



