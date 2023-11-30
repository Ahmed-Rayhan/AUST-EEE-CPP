#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float x1,x2,y1,y2, dist;

    cout<<"Enter coordinates for first point"<<endl;
    cin>>x1>>y1;
    cout<<"Enter coordinates for second point"<<endl;
    cin>>x1>>y1;

    dist= sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
    cout<<"\n\t distance = "<<dist ;


    return 0;
}


