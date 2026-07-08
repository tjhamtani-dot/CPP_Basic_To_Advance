#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n ";
    cin>>n;
    
    for(int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            //cout<<"factors of "<< n <<" is ";
            cout<<i<<endl;
        }
    }
    return 0;
}