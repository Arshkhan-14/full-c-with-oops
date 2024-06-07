#include<iostream>
using namespace std;

class no
{
private:
    int num;
public:


    no(void){
       num=0;
    }
    
    no(int a){
        num=a;
    }

 friend void setdata(no n);

};


void setdata(no n){
    cout<<n.num<<endl;
}

int main(){

 












    return 0;
}