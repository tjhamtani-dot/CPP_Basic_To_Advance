#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter value of a ";
    cin>>a;
    cout<<"Enter value of b ";
    cin>>b;
    cout<<"Enter value of c ";
    cin>>c;

    if(a>c && a>b)
    { cout<<"a is maximum number "<<a; }
    else if(b>c)
    { cout<<"b is maximum number "<<b; }
    else
    { cout<<"c is maximum number "<<c; }

    return 0;
}