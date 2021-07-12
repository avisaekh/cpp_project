#include<iostream>
using namespace std;


class animal {
//MAIN CLASS/ parent class
public:

        animal()
        {
            cout<<"constructor Animal"<<endl;
        }

        ~animal()
        {
            cout<<"destructor animal"<<endl;
        }

};



class dog:public animal
// child class of animal
{
public:
    dog()
        {
            cout<<"dog constructor"<<endl;
        }

    ~dog()
        {
            cout<<"dog destructor"<<endl;
        }

};

int main()
{

    dog xyz;
    return 0;
}
/*OUTPUT:
constructor Animal
dog constructor
dog destructor
destructor animal*/
