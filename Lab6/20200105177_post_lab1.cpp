#include <iostream>
using namespace std;
int Smallest(int arr[], int n){

   int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}
int main() {
   int n;
   cout<<"Enter the size of array: ";
   cin>>n; int arr[n-1];
   cout<<"Enter Array elements: ";
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   int small = Smallest(arr, n);
   cout<<"Smallest Element : "<<small;
   return 0;
}

