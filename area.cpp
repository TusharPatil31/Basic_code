#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int radius;
    cout<<"Enter a radius"<<endl;
    cin>>radius;
    float area, circumference;
    area= 3.14* pow(radius,2);
    circumference= 2*3.14*radius;
    cout<<"Area of circle "<<area<<" and circumference "<<circumference<<endl;

    return 0;
}