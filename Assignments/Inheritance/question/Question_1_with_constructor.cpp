#include<iostream>
using namespace std;

class staff{
protected:
    char name[15];
    double code;

public:
    void staff_info()
    {
        cout<<"Input name: "<<endl;
        cin>>name;
        cout<<"Enter code: "<<endl;
        cin>>code;
    }
};
class teacher: public staff
{
protected:
    char subject[15],publication[15];
public:

    teacher()
    {
        this->staff_info();
        cout<<"Position : Teacher"<<endl;
        cout<<"Enter subjecT:"<<endl;
        cin>>subject;
        cout<<"Enter publication: "<<endl;
        cin>>publication;
        cout<<"Name of the staff: "<<name<<endl;
        cout<<"Code of the staff: "<<code<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Publication: "<<publication<<endl;
        cout<<" \n"<<endl;

    }
};
class officer: public staff
{


protected:
    char grade[];
public:


  officer()
    {
        this->staff_info();
        cout<<"Position: Officer "<<endl;
        cout<<"Enter grade:"<<endl;
        cin>>grade;
        cout<<"Name of the staff: "<<name<<endl;
        cout<<"Code of the staff: "<<code<<endl;
        cout<<"Grade : "<<grade<<endl;
        cout<<" \n"<<endl;
    }
};
class typist: public staff
{
protected:
    int speed;
public:
    typist()
    {
        typist::staff_info();
        cout<<"Position: Typist"<<endl;
        cout<<" Enter speed (lines per min): "<<endl;
        cin>>speed;

    }

};
class regular_typist: public typist, public staff
{
    public:
    regular_typist()
    {
        cout<<"Name of the staff: "<<typist::name<<endl;

        cout<<"Type: Regular "<<endl;
        cout<<"speed: "<<speed<<endl;
        cout<<" \n"<<endl;
    }
};
class casual_typist: public typist, virtual staff
{
public:
    double wages;
    casual_typist()
    {

        cout<<" Daily Wages :"<<endl;
        cin>>wages;
        cout<<"Name of the staff: "<<typist::name<<endl;
        cout<<"Position: Typist"<<endl;
        cout<<"Type: casual "<<endl;
        cout<<"speed: "<<speed<<endl;
        cout<<wages;
        cout<<" \n"<<endl;

    }
};
int main()
{
   teacher s1;
    officer o1;
    casual_typist t1;
    regular_typist t2;
    return 0;
}
