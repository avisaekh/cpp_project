#include<iostream>
using namespace std;

int main(){
   int num1,num2,input;
  cout<<" SIMPLE CALCULATOR FOR 2 NUMBERS : "<<endl;
  cout<<"- PRESS 1 FOR ADDITION : "<<endl;
  cout<<"- PRESS 2 FOR SUBTRACTION : "<<endl;
  cout<<"- PRESS 3 FOR MULTIPLICATION : "<<endl;
  cout<<"- PRESS 4 FOR DIVISION : "<<endl;
  cout<<"- PRESS 5 FOR REMAINDER : "<<endl;
  cin>>input;
  cout<<"Enter two numbers a and b :"<<endl;
  cin>>num1;
  cin>>num2;

  switch(input){

    case 1:
      cout<<"ADDITION: "<<num1+num2<<endl;
      break;
    case 2:
      cout<<"SUBTRACTION: "<<num1-num2<<endl;
      break;
    case 3:
      cout<<"MULTIPLICATION : "<<num1*num2<<endl;
      break;
    case 4:
      cout<<"DIVISION : "<<num1/num2<<endl;
      break;
    case 5:
        cout<<"REMAINDER :"<<num1%num2;
        break;
    default:
      cout<<"Invalid input"<<endl;
  }

  return 0;
}
