#include <iostream>
#include<math.h>

using namespace std;

double TriangleArea( double a, double b, double c)
{
    double s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main()
{
    double a,b,c;
     cout<<" enter the sides a,b and c respectively :"<<endl;
    cin>>a>>b>>c;

   cout <<"area of triangle :"<< TriangleArea(a,b,c)<<endl;

    return 0;
}
