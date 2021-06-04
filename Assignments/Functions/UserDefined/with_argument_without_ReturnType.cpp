#include <iostream>
#include<math.h>

using namespace std;

void TriangleArea( double a, double b, double c)
{
    double s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<" area of triangle is :"<<area <<endl;

}
int main()
{
    double a,b,c;
    cout<<" enter the sides a,b and  respectively :"<<endl;
    cin>>a>>b>>c;
    TriangleArea(a,b,c);

    return 0;
}
