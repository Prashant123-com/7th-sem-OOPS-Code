#include<iostream>
#include<string.h>
using namespace std;
class stu{
public:
string name;
int c;

};




int main(){
    stu a[10];
    a[1].name="dasasf";
a[1].c=67;
cout<<a[1].name<<endl;
cout<<a[1].c;
    return 0;
}