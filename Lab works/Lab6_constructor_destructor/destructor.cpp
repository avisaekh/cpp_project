#include <iostream>

using namespace std;

class construct
{

public:

    construct()
    {
    cout<<"constructor is called"<<endl;

    }
    ~construct()         //<<---- syntax of construcor  ~classname().  flow -->> paila constructor call hunxa tespaxi function tespaxi destructor
    {                    //destructor ma arguments haru hudaina

    cout<<"destructor is called"<<endl;
    }
    void fun()
    {

    cout<<"Hello world "<<endl;
    }
};
int main()
{                          //output: constructor is called ---> hello world----> destructor is called.
    construct c;
    c.fun();
    return 0;
}
