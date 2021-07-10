#include<iostream>
using namespace std;


class animal {
//MAIN CLASS
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

class cat: public animal
//DERIVED CLASS
{

public:
        cat()
        {
            cout<<"cat constructor"<<endl;
        }

        ~cat()
        {
            cout<<"cat destructor"<<endl;
        }
};

class dog: public animal
// DERIVED CLASS
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
    cat abc;
    dog xyz;
    return 0;
}
/*OUTPUT:
constructor Animal
cat constructor
constructor Animal
dog constructor
dog destructor
destructor animal
cat destructor
destructor animal*/
