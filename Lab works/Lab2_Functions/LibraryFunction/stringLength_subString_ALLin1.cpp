#include<iostream>
using namespace std;

int main()
{
    string firstname, lastname,fullname ;
    cout<<" enter your 1st name "<<endl;
    cin>>firstname;
    cout<<"enter your last name:"<<endl;
    cin>>lastname;
    fullname=firstname + lastname;
    cout<<"your full name is:"<<fullname<<endl;
    cout<<"No. of words in your name :"<<fullname.length()<<endl;
    cout<<"1st 5 letters of your name are:"<<fullname.substr(0,5)<<endl;

    return 0;
}
