/*
#include<stdio.h>
#include<iostream>

#include<stdlib.h>


using namespace std;

class complex
{
private:
    int img;
    int real;
public:

void setdata(int a,int b);
void getdata();

friend complex set(complex a1,complex a2);


   
   
};

void complex::setdata(int a,int b){

    img=a;
    real=b;
}


void complex::getdata(){

    cout<<"real is"<<real<<"imaginay is"<<img<<endl;
    
}


 complex set(complex a1,complex a2){

    complex a3;

    a3.setdata(a1.img +a2.img,a1.real+a2.real);
    return a3;
}







int main(){


complex x,y,z;

  x.setdata(10,20);
  y.setdata(10,20);


  z=set(x,y);
  z.getdata();












    return 0;
}*/




#include<iostream>


using namespace std;



class complex;

class calculator{


 public:
    int sumreal(complex x,complex y);
    int sumimg(complex x,complex y);

    
};

class complex
{
private:
    int img;
    int real;

    friend  class calculator;
public:
   


   void setdata(int a,int b){

           img=a;
           real=b;
   }
    

    void getdata(){

        cout<<img<<" "<<real<<endl;
    }


    //friend int caculator::sumimg(complex x,complex y);

    //friend int caculator::sumreal(complex x,complex y);
    
};



int calculator::sumimg(complex x,complex y){

        return  x.img+y.img;
}

int calculator::sumreal(complex x,complex y){

        return  x.real+y.real;
}








int main(){


    complex a1,a2;

    a1.setdata(10,20);
    a1.getdata();
      

    a2.setdata(100,200);
    a2.getdata();

    calculator res;
     
     int x=0;

    x=res.sumimg(a1,a2);
    cout<<x;
   x= res.sumreal(a1,a2);
   cout<<x;













    return 0;
}