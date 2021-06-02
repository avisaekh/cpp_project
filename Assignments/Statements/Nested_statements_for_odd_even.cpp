#include <iostream>

using namespace std;
int main()
{
   int num,rem,a=0;
   cout<< "enter a number :";
   cin>>num;
   cout<<endl;

   rem=num%2;

   if(rem==a)
      {
         cout<<" The input number is even"<<endl;

            if(num==a)
            {
                cout<<"the value entered is zero"<<endl;
            }
            else if(num>a)
            {
                cout<<"it is a positive number"<<endl;

            }
            else
                {
                cout<<"it is a negative number"<<endl;
            }
      }
    else
    { cout<<" the input number is odd"<<endl;

            if(num==a)
            {
                cout<<"the value entered is zero"<<endl;
            }
            else if(num>a)
            {
                cout<<"it is a positive number"<<endl;

            }
            else
                {
                cout<<"it is a negative number"<<endl;
            }

    }


   return 0;

}
