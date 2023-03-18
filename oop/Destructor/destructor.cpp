#include <iostream>
using namespace std;

class R
{

public:
    R()
    {
        cout << "Constructor called" << endl;
    }
    R(int i){
        i=i+3;
        cout<<"i= "<<i<<endl;
    }
    R(int a, int b){
        cout<<a<<b<<endl;
    }
    ~R()
    {
        cout << "Destructor called" << endl;
    }
    void rData()
    {
        cout << "Member function called" << endl;
    }
};

int main()
{
    R obj1;
    R obj3(3, 4);
    // obj1.rData();
    R obj2(2);

    obj2.rData();


    // cout<<"Enter your name: "<<endl;

    return 0;
}