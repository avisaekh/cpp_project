#include<iostream>
using namespace std;

void exchange(int x, int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    cout<<"after exchanging value of x and y \n x = "<<x <<"\n y= "<<y<<endl;
}
int main()
{
    int x,y;
    cout<<"enter the value of x: "<<endl;
    cin>>x;
    cout<<"enter the value of y:"<<endl;
    cin>>y;
    exchange(x,y);
    cout<<"value of x and y in main fuction\n x= "<<x<<"\n y= "<<y<<endl;
    return 0;
}
