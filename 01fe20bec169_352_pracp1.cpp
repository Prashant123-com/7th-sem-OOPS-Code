#include<iostream>
#include<math.h>
using namespace std;

class area{

    public:
    int len,bre;
    void cal(int a);

};

void area::cal(int a){
int b=pow(a,3);
int c=6*pow(a,2);
cout<<c<<endl;
cout <<b;
}




int main(){
area are;

are.cal(4);




    return 0;
}