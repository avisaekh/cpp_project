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

    void get_teacher_info()
    {
        cout<<"Position : Teacher"<<endl;
        cout<<"Enter subjecT:"<<endl;
        cin>>subject;
        cout<<"Enter publication: "<<endl;
        cin>>publication;
    }
    void display_teacher_info()
    {
        cout<<"Name of the staff: "<<name<<endl;
        cout<<"Code of the staff: "<<code<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Publication: "<<publication<<endl;

    }
};
class officer: public staff
{


protected:
    char grade[];
public:


    void get_officer_info()
    {
        cout<<"Position: Officer "<<endl;
        cout<<"Enter grade:"<<endl;
        cin>>grade;
    }
     void display_officer_info()
    {

        cout<<"Name of the staff: "<<name<<endl;
        cout<<"Code of the staff: "<<code<<endl;
        cout<<"Grade : "<<grade<<endl;
    }
};
class typist: public staff
{
protected:
    int speed;
public:
    void info_speed()
    {
        cout<<"Position: Typist"<<endl;
        cout<<" Enter speed (lines per min): "<<endl;
        cin>>speed;

    }

};
class regular_typist: public typist, public staff
{
    public:
    void display_reg_typist()
    {
        cout<<"Name of the staff: "<<typist::name<<endl;

        cout<<"Type: Regular "<<endl;
        cout<<"speed: "<<speed<<endl;
    }
};
class casual_typist: public typist, virtual staff
{
public:
    double wages;
    void get_casual_typist()
    {
        cout<<" Daily Wages :"<<endl;
        cin>>wages;
    }
    void display_casual_typist()
    {
        cout<<"Name of the staff: "<<typist::name<<endl;
        cout<<"Position: Typist"<<endl;
        cout<<"Type: casual "<<endl;
        cout<<"speed: "<<speed<<endl;
        cout<<"wages: "<<wages;

    }
};
int main()
{
    teacher s1;
    s1.staff_info();
    s1.get_teacher_info();
    s1.display_teacher_info();
    cout<<" "<<endl;
    cout<<" "<<endl;
    casual_typist t1;
    t1.typist::staff_info();
    t1.info_speed();
    t1.get_casual_typist();
    t1.display_casual_typist();
    return 0;
}
