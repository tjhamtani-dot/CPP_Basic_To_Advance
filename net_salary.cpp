#include<iostream>
using namespace std;
int main()
{
   float basic;
   float PercentAllow;
   float PercentDeduct;
   float NetSalary;
   cout<<"Enter basic salary ";
   cin>>basic;
   cout<<"Enter percent of allowence  ";
   cin>>PercentAllow;
   cout<<"Enter percent of deduction  ";
   cin>>PercentDeduct;

   NetSalary = basic + basic*PercentAllow/100 -  basic*PercentDeduct/100;

   cout<<"net salary is "<<NetSalary;
   return 0;

}
