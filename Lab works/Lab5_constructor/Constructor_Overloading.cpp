#include <iostream>

using namespace std;

class office  //creating multiple constructor.
{
private:
    double totalwage, daily,bonus;

public:
   string name, address;
    office() //default
    {
       cout<<"NAME AND ADDRESS :"<<endl;
       cin>>name>>address;
       cout<<" NAME: "<< name<<endl;
       cout<<"ADDRESS: "<<address<<endl;
    }

    office( double x, double y)//parameterized constructor.
    {
        daily=x;
        bonus=y;
    }
    int total()
    {
        totalwage=daily+bonus;
        return totalwage;
    }

};
int main()
{
    office w1;
    office w2(50,30);
    cout<<"TOTAL WAGE :"<<w2.total()<<endl;
    return 0;
}
