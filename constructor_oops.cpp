#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle( int l=1, int b=1)
    {
        setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
    {
        if(l<0)
        length =1;
        else
        length=l;

    }
    void setbreadth(int b)
    {
        if(b<0)
        breadth =1;
        else
        breadth=b;

    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
   // rectangle r;          for non parameterized 
    rectangle r(10,5); 

    cout<<r.getlength()<<endl; 
    cout<<r.getbreadth()<<endl;
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}