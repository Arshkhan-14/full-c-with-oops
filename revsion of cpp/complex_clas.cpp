#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setdata(){

        cout<<"enter value of a and b "<<endl;
        cin>>a>>b;
    }

    void display(){

        cout<<"value of a "<<a<<endl<<"value of b "<<b<<endl;
    }
    void setdatabysum(complex a1,complex a2){

            a=a1.a +a2.a;
            b=a1.b+a2.b;


    }
    
};

int main(){

      complex a,b,c;
      a.setdata();
      a.display();

      b.setdata();
      b.display();

      c.setdatabysum(a,b);
      c.display();

    return 0;
}