#include <iostream>
#include<math.h>

using namespace std;
//AREA OF TRIANGLE: WITHOUT ARGUMENTS WITHOUT RETURN TYPE
void TriangleArea()
{
    double a,b,c,area,s;
    cout<<"Insert the three sides a,b and c respectively : "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area of triangle is :"<< area<<endl;

}
int main()
{
    TriangleArea();
    return 0;
  }
