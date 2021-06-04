#include <iostream>
#include<math.h>

using namespace std;

double TriangleArea()
{
    double a,b,c,s,area;
     cout<<" enter the sides a,b and c respectively :"<<endl;
     cin>>a>>b>>c;
     s=(a+b+c)/2;
     area=sqrt(s*(s-a)*(s-b)*(s-c));
     return area;
}
int main()
{
   cout <<"area of triangle :"<< TriangleArea()<<endl;

    return 0;
}
