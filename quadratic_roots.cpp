#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b, c;
    float root1, root2;
    cout<<"enter value of a, b, c";

    cin>>a>>b>>c;

    root1= ( -b + sqrt(b*b - 4*a*c))/(2*a);
    root2= ( -b + sqrt(b*b - 4*a*c))/(2*a);

    cout<<"roots of this quadratic equation is "<<root1<<root2;
    return 0;
    
}