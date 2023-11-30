#include <iostream>
using namespace std;


void largest(int a[], int size)
{
	int x, y, z;


	if (size < 3)
	{
		cout << " Invalid Input ";
		return;
	}

	z = x = y = INT_MIN;
	for(int i = 0; i < size; i++)
	{

		if (a[i] > x)
		{
			z = y;
			y = x;
			x = a[i];
		}

		else if (a[i] > y)
		{
			z = y;
			y = a[i];
		}

		else if (a[i] > z)
			z = a[i];
	}

	cout << "Three largest elements : "<< x << " " << y << " " << z << endl;
}

int main()
{
	int a[] = {4,52,65,225,750,782,100,801,28 };
	int n = sizeof(a) / sizeof(a[0]);

	largest(a, n);
	return 0;
}


