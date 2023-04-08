#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
    stack<int> s;
    queue<int> q;

    s.push(4);
    s.push(1);
    s.push(5);
    s.push(6);

    q.push(23);
    q.push(45);
    q.push(11);
    q.push(44);

    s.pop();

    q.pop();


    cout<<s.top()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    return 0;
}