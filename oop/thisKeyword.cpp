#include <iostream>
using namespace std;

class Student{
    private:
    int roll;
    string name;
    float s;

    public:
    Student(int roll, string name, float s){
        this->roll=roll;
        this->name=name;
        this->s=s;
    }    
    void display(){
        cout<<roll<<" "<<name<<" "<<s<<endl;
    }
};

int main(){
    Student obj = Student(34, "keshav", 3234);
    obj.display();

    return 0;
}



