#include <iostream>
//using objects as arrays.
using namespace std;
class myClass
{
private:
    int x;
public:
    void setx(int i)
    {
        x=i;
    }
    int getx()
    {
        return x;
    }
};

int main()
{
    myClass classes[4];
    for (int i=0;i<4;i++)
    {
        classes[i].setx(i);
    }
    for (int i=0;i<4;i++)
    {
        cout<<"output: "<< classes[i].getx()<<endl;
    }
    return 0;
}
