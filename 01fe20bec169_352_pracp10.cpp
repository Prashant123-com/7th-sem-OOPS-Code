#include<iostream>
using namespace std;

class shape{
    public:
    int width,height;
    public:
    void setwidth(int w)
{
    width=w;
}
 void setlength(int h){
    height =h;
 }

};
class Rectangle:public shape{
    public:
    int getarea()
    {
        return (width*height);
    }
};


int main(){
 Rectangle R;
 R.setwidth(5);
 R.setlength(10); 
 cout<<R.getarea(); 

    return 0;
}
