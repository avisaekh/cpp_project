#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double area, perimeter, s, a,b,c,x;
    cout<<" CALCULATION OF AREA OF TRIANGLE"<<endl;

    cout <<" input side a length :"<< endl;
    cin>>a;

    cout <<" input side b length :"<< endl;
    cin>>b;

    cout <<" input side c length :"<< endl;
    cin>>c;

    perimeter = a+b+c;

    s= perimeter/2;

    x= s*(s-a)*(s-b)*(s-c);

    area = sqrt(x);

    cout << "the perimeter is: "<<perimeter<<endl;
    cout <<" THE AREA IS :" << area<< endl;
    return 0;
}
