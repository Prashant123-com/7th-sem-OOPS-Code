#include<iostream>
using namespace std;
class a{
    public:

    class b{

        private:
        int num;
        public:
        void getdata(int n){
            num=n;}
            void putdata(){
                cout<<"The number is"<<num;

            };
        };
    };

int main(){
    a::b obj;
    obj.getdata(9);
    obj.putdata();

    return 0;
}