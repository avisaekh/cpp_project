#include<iostream>
using namespace std;


class terrestrial_animal {
//MAIN CLASS/ parent class
public:

        terrestrial_animal()
        {
            cout<<"constructor Trrestrial Animal"<<endl;
        }

        ~terrestrial_animal()
        {
            cout<<"destructor Terrestrial animal"<<endl;
        }

};

class domestic_animal
//parent class
{

public:
        domestic_animal()
        {
            cout<<"domestic animal constructor"<<endl;
        }

        ~domestic_animal()
        {
            cout<<"domestic animal destructor"<<endl;
        }
};

class dog: protected terrestrial_animal, private domestic_animal
// child class of terrestrial_animal and domestic_animal
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
domestic constructor
dog constructor
dog destructor
domestic destructor
destructor animal*/
