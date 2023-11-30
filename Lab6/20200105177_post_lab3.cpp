#include<iostream>
using namespace std;

void number(int num[], int size)
{
  int count = 0;
  cout << "\nMost occurred number: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (num[i]==num[j])
           count++;
   if (count>count)
      count = count;
  }

  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (num[i]==num[j])
           count++;
   if (count==count)
       cout << num[i] << endl;
  }
 }

int main()
{
    int num[] = {35,86,23,2838,975,146,3,3,5,3,16,54,67};
    int n = sizeof(num)/sizeof(num[0]);
    cout << "Array: ";
    for (int i=0; i < n; i++)
        cout << num[i] <<" ";

    number(num, n);
}
