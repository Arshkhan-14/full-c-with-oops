//revison

/*#include <iostream>
using namespace std;
#include"this.h"

int global=50;
void sum(){
  int a;
  cout<< global;
}

int main()
{   int n1,n2;
    int a = 5, b = 6, global=70;
    global=80;
    float f = 5.5;
    double d = 5.654;
    long double ld=6.6;
    char c='a';
    bool bl=false; // it return 1 for true and 0 for false
    cout << "the value of a is " << a << "\nthe value of b is " << b; // /*  */
// cout<< "\nthe value of bool is "<<bl<<endl;
// cout<<"the value of global variable is "<<global;
// cout<<"\n"<<global<<'\n';
//  cout<<::global+global+f+d<<'\n';
// sum();
/* cout<<"\n enter the no n1"<<endl;
 cin>>n1;
 cout<<"enter the no n2"<<endl;
 cin>>n2;
 cout<<n1+n2<<endl;*/
/*cout<<j<<endl;


// size of operator
cout<<sizeof(f)<<endl;
cout<<sizeof(d)<<endl;
cout<<sizeof(ld)<<endl;
cout<<sizeof(45.5l)<<endl;


// typecasting

float ak=45.55;

cout<<int(ak)<<endl;
return 0;
}
*/

/*
// operatprs in cpp

#include<iostream>
using namespace std;

int main(){
  int a=10,b=5;
// arhimetic operator
cout<< "a + b " <<a+b<<endl;
cout<< "a - b " <<a-b<<endl;
cout<< "a * b " <<a*b<<endl;
cout<< "a / b " <<a/b<<endl;
cout<< "a % b " <<a%b<<endl;

//comparison operator

cout<< "a>b : "<<(a>b)<<endl;
cout<< "a<b : "<<(a<b)<<endl;
cout<< "a!=b : "<<(a!=b)<<endl;
cout<< "a==b : "<<(a==b)<<endl;
cout<< "a<=b : "<<(a<=b)<<endl;
cout<< "a>=b : "<<(a>=b)<<endl;

//assignment operator
  // sum+=a ,-= ,*=
int sum=0;

sum+=a;
sum+=b;
cout<<sum;


// logical operator

cout<<" a>b && b<a : "<<(a>b && b<a)<<endl;
cout<<" a>b && b==a : "<<(a>b || b==a)<<endl;
cout<<" (a!=b)      : "<<(a!=b)<<endl;

    return 0;
}

*/
/*
#include<iostream>

using namespace std;
int c=40;
int main(){


//***** REFERING TO GLOBAL VARIABLES *****
int a,b;
cout<<"enter a no 1"<<endl;
cin>>a;
cout<<"enter no 2"<<endl;
cin>>b;
cout<<" the global c is "<<::c<<endl;
c= a+b;
cout<<"the sum is "<<c<<endl;
cout<<" the global c is "<<::c<<endl;  // we use :: to refer global variable

return 0;
}
/*

**** SIZE OF OPERATORS AND LITERLS FLOTS ETC *****
float d=34.4;
long double e=34.4;
// compiler treat 24.5 or any decimal value as double if we want to pass it as float we use 24.5f
//compiler treat 24.5 or any decimal value as double if we want to pass it as long double we use 24.5l
cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
cout<<" the size of  decimal without f or l "<<sizeof(34.5)<<endl;
cout<<" the size of  decimal with f or F "<<sizeof(34.5f)<<endl;
cout<<" the size of  decimal with l or L "<<sizeof(34.5l)<<endl;

*/
// ************ REFRENCING VARIABLES ******
// ROHAN DAS-----> MONTY---->ROHU----> DANGEROUS CODER
/*float x= 455;
float &y=x;
float &z=x;

cout<<x<<endl;
cout<<y<<endl;
cout<<z<<endl;
*/
///***********TYPECASTING *******
/*
int a=45;
float b=45.65;

cout<<(float)a<<endl;
cout<<float(a)<<endl;
cout<<int(b)<<endl;

int c= int(b);


cout<<" the sum is "<<a+b<<endl;
cout<<" the sum is "<< a+ int(b)<<endl;
cout<< "the sum is "<<a +(int)b<<endl;

  return 0;
}
*/

/*
#include<iostream>
#include<iomanip>
using namespace std;

int main(){

int b=2,c=12,d=123,e=5645;
const int a=14;
cout<<a<<endl;


//manipulators-:


cout<<"without setw "<<b<<endl;
cout<<"without setw "<<c<<endl;
cout<<"without setw "<<d<<endl;
cout<<"without setw "<<e<<endl;

cout<<"with setw "<<setw(4)<<b<<endl;
cout<<"with setw "<<setw(4)<<c<<endl;
cout<<"with setw "<<setw(4)<<d<<endl;
cout<<"with setw "<<setw(4)<<e<<endl;


//operator prcedence

cout<<b*c-4+30-55*2;  // remember precendense,and asosiavity

return 0;
}
*/
/*
#include<iostream>   /// compiler of c++ store common things for object one time in unity

using namespace std;

class shop{

int itemid[100];
int itemprice[100];
int counter=0;
public:

//void initcounter(void){counter=0;}
void setprice(void);
void getprice(void);

};

void shop :: setprice(void){
 cout<<"enter id of item "<<counter +1<<endl;
 cin>>itemid[counter];
 cout<<"enter price of item "<<counter +1<<endl;
 cin>>itemprice[counter];
 counter++;

}

void shop ::getprice(void){
  for (int i = 0; i < counter; i++)
  {
    cout<<"price of item is "<<itemprice[i] <<" id is "<<itemid[i]<<endl;
  }



}

int main(){
 shop arsh;

 //arsh.initcounter();
 arsh.setprice();
  arsh.setprice();
   arsh.setprice();
 arsh.getprice();



  return 0;
}
*/

/*
#include<iostream>
using namespace std;

class y;

class x{
int data;
public:

void setdata(int val){

  data=val;

}
friend void add(x,y);

};


class y{
int num;
public:

void setdata(int val){

  num=val;

}
friend void add(x,y);
};

void add(x a1,y a2){

 cout<<"the value of  sum of x and y is "<<a1.data+a2.num<<endl;

}


int main(){

x a;
a.setdata(5);

y b;
b.setdata(5);




add(a,b);





  return 0;
}
*/
/*
#include <iostream>
using namespace std;

class y;

class x
{
  int val1;
  friend void exchange(x &, y &);
 

public:
  void setdata(int a)
  {

     val1=a;
  }

  void display(void)
  {

    cout << val1 << endl;
  }
};

class y
{
  int val2;
  friend void exchange(x &, y &);

public:
  void setdata(int b)
  {

    val2=b;
  }
  void display(void)
  {

    cout << val2<< endl;
  }
};

void exchange(x &a1,y &a2)
{

  int temp = a1.val1;
  a1.val1 = a2.val2;
  temp = a2.val2;
}

int main()
{

  x a;
  a.setdata(5);

  y b;
  b.setdata(5);

  exchange(a, b);

  a.display();
  b.display();

  return 0;
}

*/
/*

#include <iostream>
using namespace std;

class CWH{

protected:
  string title;
  float rating;
  public:
    CWH(string s,float r){
         
       title=s;
       rating=r;
    }

   virtual void display(void){
      cout<< " hi psitian "<<endl;
     }
    
    
};

class CWHVIDEO:public CWH{
    protected:
      float videolen;
      public:
       CWHVIDEO(string s,float r,float vl) : CWH(s,r){
          videolen=vl;

       }
      
      void display(void){
       
        cout<<" the title of video is "<<title<<endl;
        cout<<" the rating is "<<rating<<endl;
        cout<<" the video length is "<<videolen<<endl;

      }
     
};

class CWHTEXT:public CWH{
    protected:
      int word;
      public:
       CWHTEXT(string s,float r,int WL) : CWH(s,r){
          word=WL;

       }
       
      void display(void){
       
        cout<<" the title of text is "<<title<<endl;
        cout<<" the rating is "<<rating<<endl;
        cout<<" the text length is "<<word<<endl;

      }
    
};




int main(){
 
 string title=" code with harry youtube";
 float rating=45.60,videolen=4.50;
int word=1000;
 
CWHVIDEO cwv(title,rating,word);
 CWHTEXT cwt(title,rating,word);

 CWH *ptr[2];
 ptr[0]=&cwv;
 ptr[1]=&cwt;

(*ptr[0]).display();
ptr[1]->display();
 

 int x=500;
  int &y=x;

  cout<<x<<y<<endl;

  return 0;
}

*/
/*
#include<iostream>
using namespace std;

int main(){
 
 int  arr[]={10,20,30};
  
  int *ptr= arr;

  cout<<ptr<<endl;
  cout<<ptr+1<<endl;
  cout<<ptr+2<<endl;

  cout<<arr<<endl;
  cout<<&arr[1]<<endl;
  cout<<&arr[2]<<endl;


  cout<<*(ptr)<<endl;
  cout<<*(ptr+1)<<endl;
  cout<<*(ptr+2)<<endl;




  return 0;
}
*/
/*
#include<iostream>
using namespace std;

//int sum(int a,int b){
                         // call by value wh
 //  return a+b;
//}

void swap(int* a,int* b){ /// call by refrence
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

void swap2(int &a,int &b){ /// call by refrence variable
  int temp;
  temp=a;
  a=b;
  b=temp;
}

int & swaprefrence(int &a,int &b){
int temp;
  temp=a;
  a=b;
  b=temp;
  return a;

}


int main(){

 int n1,n2,x1=10,x2=20; /// they are actual parameter
int num1=100,num2=200;


 cout<<"enter a n1"<<endl;
 cin>>n1;
 cout<<"enter a n2"<<endl;
 cin>>n2;


 swap(&n1,&n2);
 cout<<n1<<endl;
 cout<<n2<<endl;

 swap2(x1,x2);
cout<<x1<<endl;
 cout<<x2<<endl;


swaprefrence(num1,num2)=300;
cout<<num1<<endl;
 cout<<num2<<endl;

  return 0;
}
*/
/*
#include<iostream>
using namespace std;


class employee{

  int id;
 static int count;  // static variable is also called class variable

  public:
  void setid(void){
    cout<<"enter id of employee"<<endl;
    cin>>id;
     count++;
  }

  void getid(void){

    cout<<"id no of emplyee is "<<id<< " employee no  "<<count<<endl;
  }

static void getcount(void){ // it run from class name and acees only static members

    cout<<"the count of employyee is "<<count<<endl;


};




};

int employee ::count; // u want to start from 1000 u can do count=1000;



int main(){

 employee ak,bk,ck;

ak.setid();
ak.getid();
employee::getcount();

bk.setid();
bk.getid();
employee::getcount();

ck.setid();
ck.getid();
employee::getcount();


  return 0;
}
*/
/*
#include<iostream>
using namespace std;


class test{
  int b;
  int a;
  public:
     //test(int i, int j): a(i),b(j)
     // test(int i, int j): a(i),b(j+i)
      // test(int i, int j): a(i),b(2*j)
     // test(int i, int j): a(i),b(a+j)  run
      // test(int i, int j): b(j),a(i+b)  // create problem becuase a is declare first in class so
                                             // it initlize first
        test(int i, int j): a(i)
        {

            b=j;
      cout<<" constructor executed "<<endl;
      cout<<" value of a is "<<a<<endl;
      cout<<" value of b is "<<b<<endl;
     }
};




int main(){

  test constructor(4,5);

  return 0;
}

*/
/*
#include<iostream>
using namespace std;

class base1{
protected:
 int a;
 int b;
 int c;
public:
     base1(int a1,int b1, int c1):a(a1),b(b1),c(c1){

     }
     
      void display(void);
      
         
      
      
    
};

 void base1 :: display(void){
         
         cout<<a<<endl;
          cout<<b<<endl;
           cout<<c<<endl;
      }

class derived: public base1{
 protected:
    int d;
    int e;
    public: 
       derived(int a1,int b1, int c1,int d1,int e1): base1(a1,b1,c1), d(d1),e(e1){

       }

       void display(void){
         
         cout<<a<<endl;
          cout<<b<<endl;
           cout<<c<<endl;
           cout<<d<<endl;
           cout<<e<<endl;
      }
    

     friend int sum(derived);


};


int sum(derived der){
    int d2;
    d2=der.a+der.b+der.c+der.d+der.e;

    return d2;
}

int main(){

  derived d(1,2,3,4,5);
   
   d.display();

   int s;
   s=sum(d);
   cout<<s<<endl;
    


  return 0;
}
*/
/*
#include<iostream>
using namespace std;



int main(){
// basic
int a=50;
 int *b=&a;
 //*b=666;   IT ALSO CHANGE VALUE OF A
 cout<<a<<endl;
 cout<<b<<endl;
 cout<<*(&a)<<endl;

// new keyword
 //int *ptr= new int(40);    we use this to allocate memory
 float *ptr= new float(40);
 //delete ptr;
 cout<<*ptr<<endl;

int *arr= new int[3];  // we use this in case we want to allocate some memory
arr[0]=12;
//*(arr+1)=40;
arr[1]=40;
arr[2]=30;
//delete[] arr;    // it free the memory means delet all store value
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;



// delet keyword// opertaor

  return 0;
}
*/

/*
#include<iostream>
using namespace std;

class complex{
  protected:
  int real;
  int imaginary;

  
  

  public:

   void setdata(int a,int b){
    real=a;
    imaginary=b;
   }

   void show(void){
     cout<<" real parts is "<<real<<endl;
     cout<<" imaginary parts is "<<imaginary<<endl;
     
     
   }
};
      
      

int main(){

//complex c1,c2;

//complex *ptr=&c1;
 //complex *ptr= new complex(c1);
//(*ptr).setdata(10,20);
//(*ptr).show();

//ptr->setdata(10,20);
//ptr->show();

//arry of obj

complex *arr=new complex[3];
arr->setdata(30,40);
arr->show();

(arr+1)->setdata(60,70);
(arr+1)->show();



return 0;
}

*/

/*
#include<iostream>
using namespace std;


class A{
int a;
public:
   //A & setdata(int a)
       void setdata(int a){
       this->a=a;
     // return *this;
   }

   void getdata(void){
    cout<<a;
   }
};

// this is a keyword which is a pointer which points to the objects which invokes the
// member function
int main(){
A a;
//a.setdata(4).getdata(); //by using this we use getdata explictliy
a.setdata(4);
a.getdata();


  return 0;
}
*/
/*
#include<iostream>
using namespace std;


class base{
  public:
  int var1;
   virtual void display(void){
   cout<<" the base display "<<var1<<endl;

  }
};

class drived: public base{
  public:
  int var2;
  void display(void){
   cout<<" the base display2  "<<var1<<endl;
   cout<<" the drived display "<<var2<<endl;
  }
};

int main(){
  base obj_base;
  drived obj_drived;

  base *base_ptr;
  drived *drived_ptr;
  base_ptr=&obj_base;

  base_ptr->var1=50;
  base_ptr->display();

 base_ptr=&obj_drived;
 base_ptr->var1=40;
 //base_ptr->var2=30;   // it cannot acces drived class members
 base_ptr->display();   // here the display fuction of base calss run becuase the ptr of base class this is called late binding


 //drived_ptr=&obj_drived;
// drived_ptr->var1=403;
// drived_ptr->var2=500;
// drived_ptr->display(); // here display fun of drived class run if it not availale then base display run

  return 0;
}

*/
/*
#include <iostream>
using namespace std;

class CWH{

protected:
  string title;
  float rating;
  public:
    CWH(string s,float r){
         
       title=s;
       rating=r;
    }

     virtual void display(void){
      cout<< " hi psitian "<<endl;
     }
};

class CWHVIDEO:public CWH{
    protected:
      float videolen;
      public:
       CWHVIDEO(string s,float r,float vl) : CWH(s,r){
          videolen=vl;

       }
      
      void display(void){
       
        cout<<" the title of video is "<<title<<endl;
        cout<<" the rating is "<<rating<<endl;
        cout<<" the video length is "<<videolen<<endl;

      }
     
};

class CWHTEXT:public CWH{
    protected:
      int word;
      public:
       CWHTEXT(string s,float r,int WL) : CWH(s,r){
          word=WL;

       }
       
      void display(void){
       
        cout<<" the title of text is "<<title<<endl;
        cout<<" the rating is "<<rating<<endl;
        cout<<" the text length is "<<word<<endl;

      }
    
};

int main(){
 
 string title=" code with harry youtube";
 float rating=45.60,videolen=4.50;
int word=1000;
 
CWHVIDEO cwv(title,rating,videolen);
 CWHTEXT cwt(title,rating,word);

 CWH *ptr[2];
 ptr[0]=&cwv;
 ptr[1]=&cwt;

(*ptr[0]).display();
ptr[1]->display();
 

  return 0;
}
*/

//#include<iostream>
//using namespace std;

//int main(){

// in case of single pointer
//int a=50;
//int *ptr=&a;
//cout<<*ptr<<endl;
//*ptr=60;
//cout<<*ptr<<endl;

// i case of arr pointer
 //int array[3];
 //int *arr=array;
 //*arr=10;
 //*(arr+1)=20;
 //*(arr+2)=30;

 
 

 // in case of memory allocate
/*
 int *arr=new int[3]; // we can use it to assign no as ptr and as array
 arr[0]=10;
 arr[1]=20;
 arr[2]=30;

cout<<*arr<<endl;
cout<<*(arr+1)<<endl;
cout<<*(arr+2)<<endl;

 *arr=40;
 *(arr+1)=50;
 *(arr+2)=60;

 cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;

  return 0;
}

*/


//*******selfprogram*******
/*
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

template <class T,class T2,class T3,class T4=int,class T5=string>
class base1{
  //private:
  //static int count;
protected:
  T data1;
  T2 data2;
  T3 data3;
  T5 s;
  public:
  int *arr;
      base1(T d1,T2 d2,T3 data3, T4 size,T5 s1):data1(d1),data2(d2){
          this->data3=data3;
          arr= new T4[size];
          this->s=s1;
         //count++;
          }


      
      
      void process(void){

           if (sizeof(data1)+sizeof(data2)+sizeof(data3)>=12){
               
              cout<<"data1 square "<<sqrt(data1)<<endl;
              cout<<"data2 cube "<<cbrt(data2)<<endl;
              cout<<"data3  tan "<<tan(data3)<<endl;
              
              for (int i = 0; i < 3; i++)
              {
                cout<<arr[i]<<endl;              }
              
                cout<<s<<endl;

                         } 

            else{
                 cout<<" else is perform "<<endl;
            }
                   }    


            
              ~base1(){
               cout<<" destroctor call"<<endl;
               }       
     // static void fnuction1(void){
     //    cout<<" total object is made "<<count<<endl;
     // }
};
 
 
 
// int base1 ::count;

template< class A>
A func(A a1){
   A d=a1;
  return d;
}





int main(){

  string resul, str= " hello psitian kaise ho dost allah tumhe sucess kare";
  base1 <int,int,float> ak(4,5,4.5,3,str);
  ak.arr[0]=50;
  ak.arr[1]=60;
  ak.arr[2]=70;
  ak.process();
   resul=func(str);
  cout<<resul<<endl;




  return 0;
}

*/

// file handiling
//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;


//int main(){
//**** constructor se file handling

/*
string s2,s3,s1=" namaz kab se padhne aa rahe ho psitian";
 ofstream write("sample60.txt");
 write<<s1+" kal fazir se inshaallah";
 write.close();

 ifstream read("sample60.txt");
 //read>>s2>>s3;
 //cout<<s2<<s3;
 getline(read,s2);
 getline(read,s3);
 cout<<s2<<endl;
 cout<<s3<<endl;
*/
//****member function se file handling

 //string s2,s3,s1="hello bhai kaise ho bro";

 //ofstream write;
 //write.open("sample60.txt");
 //write<<s1;
 //write.close();


 //ifstream read;
 //read.open("sample60.txt");
 //read>>s2>>s3;
 //cout<<s2<<" "<<s3;
 //getline(read,s2);
 //getline(read,s3);
 //cout<<s2<<endl;
 //cout<<s3<<endl;


  //return 0;
//}


//******** standar syntax for open function******

#include<iostream>
#include<fstream>
#include<string>
using namespace std;



int main(){
  
//***************string**************

//string data;
//cin>>data;    // write a string( hi iam arsh) if we use cin again it raed (iam)
//cout<<data;   //recive(hi) only

// to get full line
//getline(cin,data);
//cout<<data; 



//*************file handling************
 /*
  1.for reading(in) and writing(out),append(app),trunk,etc  we use fstream 
    -> if u use trunk ,append mod if file not exit new file created 
    -> trunk will also wipeout file content
    ->append add content to file end
    -> if u use fstem to write in file it will not wipeout content it start repalcing from starting
  2.for reading only we use ifstream which is drived from fstream 
     ->               
  3.for writing only we use ofstream which is drived from fstream   
     -> if we use ofstrem  to write file if it not exit new will created
        if file exit it content wipeout | because it contain trunk            


*/
  fstream file;
  file.open("sample60.txt",ios :: in | ios :: out | ios ::app);

   if(!file.is_open()){

     cout<<" no file is open"<<endl;
   }
    else{
    // read and write
    cout<<"file open succesfully"<<endl;
 
       file<<" psitian";

      file.seekg(0);

   cout<<" reading a file"<<endl;

      string str; 

      while (file.eof()==0)
      {
        getline(file,str);
        cout<<str<<endl;
      }
      
        getline(file,str);

       cout<<str;
       
    }
    

  
  file.close();
  return 0;
}