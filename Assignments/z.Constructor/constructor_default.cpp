#include <iostream>

using namespace std;
//constructor; no return type; special member function having same name as class ; (default, parameterized, copy)types
class construct
{

public:
    int a,b;

    construct()//<-- constructor; default;
    {
        a=10;           // [Assignments on constructor overloading]
        b=20;
    }
};
int main()
{
    construct c; // yesma constructor is being called;  object create huda constructor call(invoke) hunxa;
    cout<<"a: "<<c.a<<endl;
    cout<<"b: "<<c.b<<endl;
    return 0;
}
