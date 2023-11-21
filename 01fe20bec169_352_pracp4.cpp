#include<iostream>
using namespace std;

class test{
    static int x;
    public:
    static int y;
    void fun(){
        cout<<"value of static x is"<<x<<endl;
        cout<<"value of static y is"<<y;
    }
};

int test :: x=1;
int test :: y=4;

int main(){
    test obj;
    obj.fun();

    return 0;
}