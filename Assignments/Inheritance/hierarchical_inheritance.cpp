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

class domestic: public animal
//child Class of animal
{

public:
        domestic()
        {
            cout<<"domestic constructor"<<endl;
        }

        ~domestic()
        {
            cout<<"domestic destructor"<<endl;
        }
};

class dog: public domestic
// child class of domestic
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
cat constructor
constructor Animal
dog constructor
dog destructor
destructor animal
cat destructor
destructor animal*/
