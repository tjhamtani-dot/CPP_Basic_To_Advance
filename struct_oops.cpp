#include<iostream>
using namespace std;

struct demo
{
  int x;
  int y;

  void display()
  {
    cout<<x<<" "<<y<<endl;
  }
};

int main()
{
    demo d;
    d.x=56;
    d.y=78;
    d.display();
}
