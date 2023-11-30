#include <iostream>
#include <cmath>

using namespace std;

int main() {
   float val[15] = {51,21.63, 4.4,6.43,1,4,57.3,3.5,8.5,12, 13.1, 14.1,23, 34.6};
   float sum = 0.0, mean, variance = 0.0, stdDeviation;
   int i;
   for(i = 0; i < 10; ++i)
   sum += val[i];
   mean = sum/10;
   for(i = 0; i < 10; ++i)
   variance += pow(val[i] - mean, 2);
   variance=variance/10;
   stdDeviation = sqrt(variance);
   cout<<"The data values are: ";
   for(i = 0; i < 10; ++i)
   cout<< val[i] <<" ";
   cout<<endl;
   cout<<"The standard deviation of these data values is "<<stdDeviation;
   return 0;
}
