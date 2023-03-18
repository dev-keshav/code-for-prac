#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int roll=56;

    public:
        int hy(){
            return this->roll;
        }
};

int main(){
    Student obj;
    cout<<obj.hy()<<endl;

    return 0;
}