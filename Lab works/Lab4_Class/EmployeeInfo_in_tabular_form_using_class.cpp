#include<iostream>
#include<string.h>
using namespace std;

/*WAP to define a class named employee with it's data members ID, Name and Salary.
Read records of five employees and display the record in tabular form
[Hint- to make the data display in tabular form, use "/t"(escape sequence) for line spaces]*/

class office
{
public:
    string name;
    double idnum,salary;

    void input()
    {
            cout<<"enter the name of employee" << endl;
            cin>>name;
            cout<<"enter the salary of employee" << endl;
            cin>>salary;
            cout<<"enter the ID number of employee" << endl;
            cin>>idnum;
        }
    void output()
    {
        cout<<"NAME : \t"<<name<<endl<<" ID number : \t"<< idnum<< endl<< "SALARY : \t"<<salary <<endl;
    }


};

int main()
{
    office x[5];

    for (int a=0;a<5;a++)
    {
        cout<<"for employee :"<< a+1<<endl;
        x[a].input();
        cout<<endl;
        cout<<endl;
    }
     for (int a=0;a<5;a++)
    {
        x[a].output();
        cout<<endl;
    }

    return 0;
}
