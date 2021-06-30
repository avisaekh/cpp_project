#include <iostream>

using namespace std;
//static variable.
class first
{
    int a;
    static int b;
public:
    first(int x, int y)
    {
    a=x;
    b=y;
    }
    void show()
    {//normal member function can access both static and non-static data member
        cout<<a<<"   "<<b<<endl;
    }
    static void display()
    {
    cout<<"Value of b is : "<<b<<endl;
        }

};

int first::b=0;

int main(){
    first obj1(10 ,20);
    first obj2(100,200);
    obj1.show();
    obj2.show();
    obj1.display();
    obj2.display();
}
