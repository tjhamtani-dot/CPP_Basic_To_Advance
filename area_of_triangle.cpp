#include<iostream>
using namespace std;
int main()
{
    float length , breadth , area ;
    cout<<"enter length and breadth of triangle ";
    cin>>length>>breadth;

    area = (length*breadth)/2;

    cout<<"area of triangle is "<<area;
    return 0;
}