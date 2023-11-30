#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void separate(int nums[], int size)
{
    int left = 0, right = size-1;
    while (left < right)
    {
         while (nums[left]%2 == 0 && left < right)
            left++;

        while (nums[right]%2 == 1 && left < right)
            right--;

        if (left < right)
        {
            swap(&nums[left], &nums[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int nums[] = {2, 4, 6, 19, 22, 63, 79, 15, 82, 89, 69, 13};
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Input Array: ";
    for (int i=0; i < n; i++)
    cout << nums[i] <<" ";
    separate(nums, n);

    cout<<"n \nSeparated (even, odds) : ";
      for (int i=0; i < n; i++)
      cout << nums[i] <<" ";

      return 0;
 }


