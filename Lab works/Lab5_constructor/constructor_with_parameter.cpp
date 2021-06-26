#include <iostream>

using namespace std;

class point
{

private:
    int a,b;

public:
    point( int x, int y) //constructor with parameter / parameterized constructor
    {
        a=x;
        b=y;
    }
    int geta()
    {
        return a;                                             // (assignment on construction overloading.)
    }
    int getb()
    {
        return b;
    }
};
int main()
{
    point p(5,10);  //object sanga parameter halera constructor call gareko. (just like function)/
    cout<<"a: "<<p.geta()<<endl;
    cout<<"b: "<<p.getb()<<endl;
    return 0;
}
