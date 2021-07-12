#include<iostream>
using namespace std;


class parent {
public:

    void print()
    {
        cout<<"parent class"<<endl;
    }
};

class child: public parent

{
public:
    void print()
    {
        cout<<"child class"<<endl;
    }


};

int main()
{
   child obj;
   obj.print();//function of child class is called.
    return 0;
}
//output: child class
