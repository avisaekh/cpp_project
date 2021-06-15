#include <iostream>

using namespace std;

//WAP to define a class in C++ as shown : class name - Student attributes - name, roll, address, percentage methods - input(), display

class StudentAttributes
{
public:
    string Stdname,address;
    double roll,percentage;

    void input()
    {
        cout<<"enter your name:"<<endl<< "roll:"<<endl<<"address: " << endl<< "percentage: "<<endl;
        cin>>Stdname;
        cin>>roll;
        cin>>address;
        cin>>percentage;

    }

    void display()
    {


    if (percentage>=40)

     {
          cout<<"NAME :"<<Stdname<<endl;
          cout<<"ROLL :"<<roll<<endl;
          cout<<"ADDRESS :"<<address<<endl;
          cout<<"PERCENTAGE :"<<percentage<<endl;
          cout<<"RESULT : PASS"<<endl;

      }
      else
       {
           cout<<"Sorry, Your score is below 40%."<<endl;
       }

    }

} ;
int main()
{
    StudentAttributes name;
    name.input();
    name.display();
   return 0;
}
