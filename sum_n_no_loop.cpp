#include<iostream>
using namespace std;
int main()
{
    int sum=0 , n;
    cout<<"Enter n ";
    cin>>n;
    
    for(int i=1 ; i<=n ; i++)
    {
        sum+=i;   // sum = sum +i
                  // cout<<sum<<endl;  it showes the process of sum
    }
    cout<<"sum of "<<n<<" number is "<<sum<<endl;
    return 0;
}