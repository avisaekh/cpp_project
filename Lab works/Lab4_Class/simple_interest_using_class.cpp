#include <iostream>

using namespace std;

//WAP in C++ to calculate simple interest from given principle, time and rate. Set the rate to 15% as default argument when rate is not provided

class SInterest
{
  double principle, rate, time;

public:

  void data(double p,double t,double r=15){
    principle=p;
    time=t;
    rate=r;
  }

  void calc(){
    double SI;
    SI=(principle*time*rate)/100;
    cout<<"Simple interest is :"<<SI<<endl;
  }
};

int main()
{
  double p,t;
  cout<<"input principle and time"<<endl;
  cin>>p>>t;
  SInterest obj;
  obj.data(p,t);
  obj.calc();

    return 0;
}
