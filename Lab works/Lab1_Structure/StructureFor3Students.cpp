#include <iostream>

using namespace std;

    struct student
    {
    string name;
    string address;
    int roll;

    };

 int main()
{

int i;
 student profile[3];

for (i=0;i<3;i++)
{

    cout << i+1<<". Enter Full name: "<<endl;
    cin>>profile[i].name;
    cout << "Enter roll no: "<<endl;
    cin >> profile[i].roll;
    cout << "Enter address: "<<endl;
    cin >> profile[i].address;

    cout<<endl;
    cout<<endl;

}
cout<<"THE DETAILS OF STUDENTS"<<endl;
for (i=0;i<3;i++){
    cout<<"NAME :"<<profile[i].name<<endl;
    cout<<"ADDRESS:" << profile[i].address<<endl;
    cout<<"roll no."<<profile[i].roll<<endl;
    cout<<endl;
    cout<<endl;

}

  return 0;

}
