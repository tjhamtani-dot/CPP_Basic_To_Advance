#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a, b, c;
    float d, root1, root2;         
    cout<<"enter value of a, b, c";

    cin>>a>>b>>c;
    
    d = b*b - 4*a*c;

    if(d==0)
    {
        root1= -b/(2*a);
        cout<<"roots of this quadratic equation is real and equal "<<root1;
    }
    else if(d>0)
    {
        root1= (-b + sqrt(d))/(2*a);
        root2= (-b + sqrt(d))/(2*a);
        cout<<"roots of this quadratic equation is real and unequal "<<root1<<root2;
    }
    else
    {
        cout<<"roots of this quadratic equation is imaginary ";
    }

    return 0;
    
}