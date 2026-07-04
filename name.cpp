#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May I know your name ";

    getline(cin,name);   // it will read complete line

    //cin>>name;     //it will read only one word
    
    cout<<"Hello "<<name;
    return 0;
}