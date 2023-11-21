#include<iostream>
using namespace std;
class boss{
    public:
void good();

};

void boss :: good()
{
    cout<<"function is called";
}
int main(){
    boss a;
    a.good();
    return 0;
}