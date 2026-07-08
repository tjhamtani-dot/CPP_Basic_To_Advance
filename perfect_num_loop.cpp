#include<iostream>
using namespace std;
int main()
{
    int n, sum=0 ;
    cout<<"enter n ";
    cin>>n;
    
    for(int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==2*n)                            // perfrct number ->  sum of factors = 2*n
    cout<<n<<" is perfect number ";
    else
    cout<<n<<" is not perfect number ";

    return 0;

}