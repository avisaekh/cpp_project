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
// DERIVED CLASS
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
   obj.parent::print();// prints out function of parent class using child class object.
   obj.print();// prints out function of child class.
    return 0;
}
//OUTPUT: parent class endl; child class
