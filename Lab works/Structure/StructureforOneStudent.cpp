#include <iostream>

using namespace std;

    struct student{
    char name[20];
    char address[20];
    int roll;

};

 int main()
{

int i;
 student profile;

    cout << "Enter Full name: ";
    cin.get(profile.name,20);
    cout << "Enter roll no: ";
    cin >> profile.roll;
    cout << "Enter address: ";
    cin >> profile.address;


    cout<<"NAME :"<<profile.name<<endl;
    cout<<"ADDRESS:" << profile.address<<endl;
    cout<<"roll no."<<profile.roll<<endl;


  return 0;

}
