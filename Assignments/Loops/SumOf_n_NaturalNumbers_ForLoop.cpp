#include <iostream>

using namespace std;
int main()
{
   int x,num,sum=0;
   cout<<"enter the value for the nth term :";
   cin>>num;
   cout<<endl;


   for(x=1;x<=num;x++)
     {
      sum=sum+x;
     }

   cout<<"the sum of first "<< num <<" natural numbers is :"<< sum;
   return 0;

}
