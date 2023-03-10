#include<iostream>
using namespace std;
int main()
{
    float area, radius, cir;
    cout<<"Enter radius= ";
    cin>>radius;

    area=radius*radius*3.141;
    cir=2.0*3.141*radius;
    cout<<"Area: "<<area<<endl;
    cout<<"Circumference: "<<cir<<endl;
    return 0;

}
