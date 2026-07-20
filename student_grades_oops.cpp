#include<iostream>
using namespace std;

class student
{
    private:
    int roll;
    string name;
    int maths , physics , chemistry;

    public:
    student( int r , string n , int m , int p , int c)
    {
        roll=r;
        name=n;
        maths=m;
        physics=p;
        chemistry=c;
    }
    int total()
    {
        return maths+ physics+chemistry;
    }
    char grade()
    {
        float average = total()/3;
        if(average>=60)
        return 'A';
        else if(average>=40 && average<60)
        return 'B';
        else
        return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int maths , physics , chemistry;

    cout<<"enter roll number of a student: ";
    cin>>roll;
    cout<<"enter name of a student: ";
    cin>>name;
    cout<<"enter marks of 3 subjects: ";
    cin>>maths>>physics>>chemistry;

    student s(roll, name, maths , physics , chemistry);
    cout<<"total marks : "<<s.total()<<endl;
    cout<<"grade of student : "<<s.grade()<<endl;
    return 0;
}