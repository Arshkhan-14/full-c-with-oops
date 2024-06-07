/*
#include<iostream>
using namespace std;

class complex;

class calculator{

private:
int a;
int b;

public: 
void setdata(int a1,int b1){
a=a1;
b=b1;

}
 
 void display(){

    cout<<a<<endl<<b;
 }
   void sum(complex,complex);


};

class complex{

int real;
int img;

public:


  friend void calculator::sum(complex a1,complex b1);
 //friend  class calculator;
  void readdata(int c,int d){

      //cout<<"enter real and img data\n";
      //cin>>real>>img;

      real=c;
      img=d;

  }
 void display(){

    cout<<real<<endl<<img<<endl;
 }


};


 void calculator::sum(complex a1,complex b1){
         
        
        a=a1.real+b1.real;
        b=a1.img+b1.img;
        }


int main(){

complex a2,b2,c;

a2.readdata(10,20);
b2.readdata(30,40);
 
 calculator ak;
  
  ak.sum(a2,b2);
ak.display();
  

 














    return 0;
}
*/
/*
#include<iostream>


using namespace std;

class y;

class x{
int data1;

public:
void display(){

   cout<<data1<<endl;
    
    
    
    
}
friend void swap(x &,y&);
  
void setdata(int val1){

  data1=val1;

}

};

class y{
int data2;
public:
friend void swap(x &,y&);
void display(){

   cout<<data2<<endl;
    
    
    
    
}
void setdata(int val2){

  data2=val2;

}

};


 void swap(x &l,y &m){

     int temp=l.data1;
     l.data1=m.data2;
     m.data2=temp;

 }

int main(){

   x ak;
   y bk;

   ak.setdata(10);
   ak.display();

   bk.setdata(100);
   bk.display();

   swap(ak,bk);

 
 
   ak.display();

  
  
   bk.display();

   












   return 0;
}
*/


/// contructor
/*
#include<iostream>

using namespace std;

class complex{

private:
int a;
int b;
int c;

public:

 void setdata(int n){
   a=n;

 }

complex(void){
   a=1000;
   b=20000;
}
complex(int n1,int n3);
//complex(int n1,int n2);



void display(){



   cout<<a<<endl<<b<<endl;
}


};


complex::complex(int n1,int n3=300){

   a=n1;
   b=n3;

}


int main(){

complex c;
c=complex(10);
c.display();




   return 0;
}

*/


/*
#include<iostream>

using namespace std;
int count=0;
class number{



  public:
  number(){
    ::count++;
    cout<< " this is the time when constructor is called for object number "<< count<<endl;

  }
  ~number(){

    cout<< " this is the the time destructor is called for object number "<<count<<endl;
    count--;
  }

};


int main(){

cout<< " main function "<<endl;
cout<< " creating object n1 "<<endl;
number n1;
{
  cout<< " entering block "<<endl;
  cout<< " creating object n2,n3 "<<endl;

   number n2,n3;
     cout<< " exiting block "<<endl;
}

 cout<< " back to main fuction "<< endl;

 /// if we create an object after running the program copiler found that the object is not in use after a scope
 // or after a program complete run it destroy it


  return 0;
}
*/


 //singe inheretance 

 /*
#include<iostream>

using namespace std;


class employ{

int data1;
public:

int data2;

int getdata1(){


   return data1;
}

void setdata(int a,int b){

     data1=a;
     data2=b;  
}
};
class prog: public employ{


int data3;


public: 

void getdata(int n1,int n2){
    setdata(n1,n2);
    data3=data2*getdata1();

}


void display(){



   cout<<getdata1()<<endl<<data2<<endl<<data3;
}

};




int main(){



 prog ak;
 ak.getdata(10,20);
 ak.display();








   return 0;
}



*/

   // protected 

   /*
#include<iostream>

using namespace std;

class base{
   protected:
   int a;
   private:
   int b;
   public:
   int c;

base(int a1,int a2){
      a=a1;
      b=a2;
      c=a1*a2;
}
 
 base(){}
 void show(){


   cout<<a<<endl<<b<<endl<<c<<endl;
 }

};

class papa: public base{
   public:
   int d;
   papa(int n1,int n2,int n3,int n4){
    
     a=n1;
     c=n2;
     d=n2*n4;




   }
   papa(){}


     
};



int main(){


papa ak;
ak.c=10;
ak.d=20;
ak.show();


   return 0;
}

*/


/*



#include<iostream>



using namespace std;



class student{
protected:
int rollno;
private:
int age;
public:
int id;

void setdata(int n1,int n2){
   rollno=n1;
   id=n2;
   age=n1*n2;
}
};
class exam: public student{
    
    protected:
   int exam_roll_no;
   public:
   void examdata(){

        exam_roll_no=rollno+id;

   } 
};

class result: public exam{
protected:

int physic;
int maths;
int chemi;

public:

 result(int q,int w,int e){
   
     physic=q;
     maths=w;
     chemi=e;


 }
  
  void show(){

    cout<<"roll no "<<rollno<<"exam rollno "<<exam_roll_no<<"marks "<<physic<<endl<<maths<<endl<<chemi;
  }





};

 


int main(){


result ak(10,20,30);
ak.setdata(1,2);
ak.examdata();
ak.show();







   return 0;
}

*/


/*
#include <iostream>
using namespace std;

class base1
{
protected:
  int base1;

public:
  void setbase1(int a)
  {
    base1 = a;
  }

  void showbase1(void){

    cout<<" the base 1 is "<<base1<<endl;
  }
};

class base2
{
protected:
  int base2;

public:
  void setbase2(int a2)
  {
    base2 = a2;
  }

  void showbase2(void){

    cout<<" the base 1 is "<<base2<<endl;
  }
};


class derived: public base1,public base2{

   protected:
   int base3;

   public:
   void setbase3(void){
    base3=base1+base2;
   }

    void showbase3(void){
      showbase1();
       showbase2();
    cout<<" the base 3 is "<<base3<<endl;
  }


};
int main()
{
  derived der;
  der.setbase1(10);
  der.setbase2(23);
  der.setbase3();
  der.showbase3();
  return 0;
}
*/

/*

#include<iostream>

using namespace std;


int main(){

string *ptr=new string[10];
 
 *(ptr)="arsh khan";
 delete [] ptr;
cout<<(*ptr);



  return 0;
}

*/


#include<iostream>
using namespace std;

class shopitem{
  int id;
  float price;
  public:

  void setdata(int a,float b){
    id=a;
    price=b;

  }

  void getdata(void){
    cout<<" the id of item is "<< id<<endl;
     cout<<" the price of item is "<< price<<endl;
  }
};


int main(){
  int size=2;
  shopitem *ptr = new shopitem[size];
  shopitem *ptrtemp= ptr;

int p,i;
float q;

for ( i = 0; i < size; i++)
{
     cout<<" enter the  id and price  of item "<<i+1<<endl;
     cin>>p>>q;
     // *ptr.setdata(p,q);
     ptr[i].setdata(p,q);
    // ptr++;

}


for ( i = 0; i < size; i++)
{


     // *ptr.setdata(p,q);
     //ptrtemp->getdata();
     //ptrtemp++;
     ptr[i].getdata();
}


  return 0;
}
