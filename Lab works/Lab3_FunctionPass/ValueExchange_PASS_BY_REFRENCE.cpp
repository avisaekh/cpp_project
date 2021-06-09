#include<iostream>
using namespace std;

void exchange(int &x, int&y)
{
    int z;
    z=x;
    x=y;
    y=z;
}
int main()
{
    int x,y;
    cout<<"enter the value of x: "<<endl;
    cin>>x;
    cout<<"enter the value of y:"<<endl;
    cin>>y;
    exchange(x,y);
    cout<<"Interchange value of x and y is "<<x<<" and "<<y<<" respectively."<<endl;
    return 0;
}
