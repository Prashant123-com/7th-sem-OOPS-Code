#include<iostream>
using namespace std;

class parent{
    protected: 
    int a;
};

class child:public parent{

    public : 
    int b;
void write(int c)
{
    a=c;
    cout<<a<<endl;
}

};

main(){
 child obj;
 
 obj.b=10;
 obj.write(5);
 //cout<<obj.a<<endl;
 cout<<obj.b;
}