#include <iostream>
using namespace std;

class Hero{
    private:
    int n;
    string level;

    public:
    Hero(){
        int ans=2+n;
    }

    public:
    int getHero(int n){
        int k=4+n;
        return k;
    }
};

int main(){
    Hero obj;
    cout<<obj.getHero(34)<<endl;

    return 0;
}
