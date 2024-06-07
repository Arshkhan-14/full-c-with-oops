//********* lecture 1*********
//#include<iostream>// this is header file that help us to input and output (cin and  cout)

// using namespace std;// here we tell the complier to that we are using std function in this program

// int main(){ // program executeiton always star with main ( this  1st { is start point of program body)
//     int a=5,b=6;
//    /* std:: */cout<<"value of a is "<< a <<" value of b is " << b; // u can write std here or outside main
//     return 0;
// }           // this 2nd } is end point of program body

// ******lecture 2 ( variables and comment)******
 
/*

*variable container to hold data
* variables are  of different types in c++
int =1
float=02.2
char='abc'
double-  it is same as float but it store more no after decimal point i
boolean - true/ false

syntax:
  data- type variable- name =value;  === int a=1; char letter = 'a';



BASED ON SCOPE ,VARIABLE CAN BE CLASSIFIED INTO TWO TYPE;
1.LOCAL VARIABLE
2. GLOBAL VARIABLE

__VARIABLE SCOPE__

*scope of variable is the region in code where existence of variable is valid
* LOCAL VARIABLE- local variables are declared inside the braces of any function and can be access
               only from there
*GLOBAL VARIABLE- global variable are declared outside any function and can be accessed from anywhere
* can global and local variables have same name in c++? yes,we will see!

*** C++ DATA TYPE ***

1.data type define the type of data variables can hold, for example an integer variable can hold integre data,
  a charcter type variable can hold character data etc.

2. data types in c++ categorised in three groups:
    *built in
        -int
        -char
        -float
        -double
        -bool
    *user-define
       *struct
       *union
       *enum
    *derived datatype
      *array
      *function
      *pointer

*/
/*
#include<iostream>
using namespace std;

int glo =6; // global vriable
void sum(){
  int a;
  cout<< glo;
}

int main(){
int glo=9; //local variable
glo=70;
int a=5,b=6;
float pi=3.14;
char c='a';
bool t=true;  //return 1 if true and  0 if false

cout<<"value of a is  "<< a <<"\nvalue of b is " << b;
cout<<"\nthe value of pi is "<< pi;
cout<<"\nbool "<<t;
cout<<"\n"<<glo<<'\n';
sum();

return 0;

}
*/
/*
 RULE FOR DECLARE VARIABLES IN C++
1. variable names in c++ can range from 1 to 255 characters.
2. all variables namesmust begins with a letter of the alphabet or an underscore(_).
3.after hte first initial letter, variables names can also contain letters anb numbers.
4. variablse names are caes sensitive.
5. no spaces or special characters are allowed.
6. you cannot use a c++ keyword(a reserved word) as a variable name.

*/

//****comment****
// -for single line
// multi line

/*

----BASIS INPUT/OUTPUT IN C++ --- (iostream -> input/output stream)
 1.C++ comes with libraries which helps us in performng input/output. in c++ sequence of
  bytes corresponding to input and output are commonly known as streams.

2.input stream: direction of flow of bytes takes place from input device(for ex keyboard) to the main menory

3. output stream: direction of flow of bytes takes place from main memory to the output device(for ex display)

*/

/* #include<iostream>

using namespace std;


int main(){

int n1,n2;

cout<<"enter no n1\n"; // << insertion opertator
cin>>n1;  // extraction operator

cout<<"enter no n2\n"; // << insertion opertator
cin>>n2;  // extraction operator


cout<< "the sum of n1+n2 is "<< n1+n2;


}*/

/*
******* LECTURE 06 *****


-- HEADER FILE AND OPERATORS IN C++ --
 ** there are two types of header files:
 1.system header files: it come with compiler
 #include<iostream>
 2. user defined header files : it is written by the programmer
example #include"this.h"

*/
// we van use \n nad endl for new line
// cout<<" i am programmer"<<endl;
// cout<<" i am programmer \n ";
/*
#include<iostream>

using namespace std;

int main(){
int a=7;
int b=5;
 cout<<" follwing types of operators in c++\n";
 // arthemetic operators

cout<<" a+b is "<<a+b<<endl;
cout<<" a-b is "<<a-b<<endl;
cout<<" a*b is "<<a*b<<endl;
cout<<" a/b is "<<a/b<<endl;
cout<<" a%b is "<<a%b<<endl;
cout<<" a++ is "<<a++<<endl; // first print hten incremnt
cout<<" a-- is "<<a--<<endl;
cout<<" ++a is "<<++a<<endl; // first increment then print
cout<<" --a is "<<--a<<endl;

// assigmnet operator
//int a=3,b=5;
//char r='a';
// sum+=a ,-= ,*=


// comparison operator // it return 0 for false and 1 for true
cout<< "the value of  a==b "<<(a==b)<<endl;
cout<< "the value of  a!=b "<<(a!=b)<<endl;
cout<< "the value of  a>=b "<<(a>=b)<<endl;
cout<< "the value of  a<=b "<<(a<=b)<<endl;
cout<< "the value of  a>b "<<(a>b)<<endl;
cout<< "the value of  a<b "<<(a<b)<<endl;

// logical operator
cout<< "the value of  a>b && a!=b "<<((a>b) && (a!=b))<<endl; // need both true it return true 1
cout<< "the value of ((a<b) || (a==b))  "<<((a<b) || (a==b))<<endl;// it need 1 ture it return true
cout<< "the value of ( ! (a==b))  "<<(!(a==b))<<endl; // it convert ture into false and false into true


  return 0;
}

/*

*** LECTURE 07 *****    */
/*
#include<iostream>

using namespace std;
int c=40;
int main(){


***** REFERING TO GLOBAL VARIABLES *****
int a,b;
cout<<"enter a no 1"<<endl;
cin>>a;
cout<<"enter no 2"<<endl;
cin>>b;

c= a+b;
cout<<"the sum is "<<c<<endl;
cout<<" the global c is "<<::c<<endl;  // we use :: to refer global variable
*/
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

// ****** lecture 8 ****
// constant ,manipulators, operatorprsendence

/*
#include<iostream>
#include<iomanip>
using namespace std;

int main(){

int b=2,c=12,d=123,e=5645;
const int a=14;
cout<<a<<endl;

/*
manipulators-:


cout<<"without setw "<<b<<endl;
cout<<"without setw "<<c<<endl;
cout<<"without setw "<<d<<endl;
cout<<"without setw "<<e<<endl;

cout<<"with setw "<<setw(4)<<b<<endl;
cout<<"with setw "<<setw(4)<<c<<endl;
cout<<"with setw "<<setw(4)<<d<<endl;
cout<<"with setw "<<setw(4)<<e<<endl;
*/
/*
//operator prcedence

cout<<b*c-4+30-55*2;  // remember precendense,and asosiavity

return 0;
}
*/

// **************lecture 9********

/*
c++ control structure

1.sequence structure     |
2.selection structure    |  basic  control structure
3.loop stucture          |



1.sequence structure              2.SELCTION STRUCTURE              3.LOOP STRUCTURE
      |                                    |                                |  ENTRY IN PROGRAM
      | entry in program                   | entry in program               |
    ACTION 1                               |                               (  ) ----- LOOP-----
      |                      TRUE------CONDITION ------FALSE                 |                |
      |                        |                         |                   |                |
    ACTION 2                   |                         |            (CONDITION)----TRUE----(A1)
      |                        A1 ----------( )--------- A2                  |
      |                                      |                               |
    EXIT                                    EXIT                            FALSE
                                                                              |
                                                                              |
                                                                            (A2)
                                                                              |
                                                                              |
                                                                              EXIT


*/
//********** if else************
/* #include<iostream>
using namespace std;

int main(){
  float age;
  cout<<"enter age"<<endl;
  cin>>age;
  if ((age<18) && (age>17)){
    cout<<"you can drive"<<endl;}
  else if (age==50)
  {
    cout<<"you can not drive half centuary"<<endl;

  }
   else{
    cout<<"you can not drive"<<endl;
   }


  return 0;
}
*/

//****SWITCH CASE STATEMENT******

/*#include<iostream>
using namespace std;

int main(){
  int age;
  cout<<"enter age"<<endl;
  cin>>age;
  switch (age)
  {
  case 17:
  cout<<"your age is 17"<<endl;
    break;

  case 18:
   cout<<"ur age is  18"<<endl;
   break;
  default:

  cout<<"no special cases"<<endl;
    break;
  }


  return 0;
}

*/
/*
****LOOPS***
1.FOR LOOPS
2.WHILE LOOPS
3.DO WHILE LOOPS


*/
/*
#include<iostream>
using namespace std;

int main(){
  int no;
  cout<<"enter no"<<endl;
  cin>>no;
  */
/* for (int i=age;i<=18;i++){

   cout<<i<<endl;
 }
 */

/* while (age<=18){

  cout<<age<<endl;
  age++;
 }
*/

/*
int i=1;
do {

  cout<<i*no<<endl;
  i++;
}while (i<=10);


*/

// return 0;
//}

///******lecture 11 break and countinue
/*
#include<iostream>
using namespace std;

int main(){


  for (int i=1;i<=18;i++){
     if (i==5){
      continue;

     };
    cout<<i<<endl;
  }



                                                                                            

  return 0;
}

*/

//********lecture 12*******pointer
/*
#include<iostream>
using namespace std;

int main(){

  // what is  pointer? ---> data type which hold the adrees of other data types

  int a=3;
  int* b=&a;
  int** c=&b;
  // &---> adrees at operator
  cout<<"the adrees of a is"<<&a<<endl;
  cout<<"the adrees of a is"<<b<<endl;
   cout<<"the adrees of a is"<<c<<endl;

// * ---> derefrence operator
     cout<<"the value of a is "<<*b<<endl;
      cout<<"the value of c is "<<*c<<endl;

  return 0;
}

*/

// ******lecture 13****** array and pointer arthimetic

// what are arrays in c++?
/*

1. array is collection of items of similar type stored in contiguous memory loacxtions
2.sometimes,a simple variable is not enough to hold all the data.
3.for example, lets say we want to store the marks of 2500 srudents,
  gaving 2500 different variables for this task is not feasible.
4.to solve this problem , we can define an array with size 2500 that can hold
  the marks of all students.

int marks[2500];----->marks[0],........marks[n];
  */
/*
#include<iostream>
using namespace std;

int main(){

  int marks[]={10,45,12,30}; // 1st method to create aarry
  int no[4];                 // 2nd method to create array

  // C++ POINTER AnD ARRAY
  /*

  IN CASE OF ARRAY THE ADREES OF FIRST BLOCK IS ACCESS BY  MARKS NOT BY (&MARKS)

 int* p=marks;

  *(p)=32
  *(p+1)=99
  *(p+2)=38
  *(p+3)=51
*/

/*
for (int i = 0; i < 4; i++)
{
  cout<<marks[i]<<endl;
}

int* p=marks;

cout<<*(p++)<<endl;

cout<<*(p)<<endl;     ///----this is pointer arthimetic using this we get adrees of different block
cout<<*(p+1)<<endl;
cout<<*(p+2)<<endl;
cout<<*(p+3)<<endl;

cout<<marks;
  return 0;
}

*/

//*******lecture 14**** structurte,union,enum,typedef
/*
#include<iostream>
using namespace std;




typedef struct  employee    // all members active at a time
 {

  int id;
  char favch;
  float salary;

 }ep;

typedef union money
{                     /// only one m,embers active at a time
  int rice;
  int cash;
  char edudaction;

}un;


enum point{ak=50,jq};


int main(){

 ep arsh;
 arsh.id=1;
 arsh.favch='a';
 arsh.salary=1500.10;

cout<<"the id of arsh is "<<arsh.id<<endl;
cout<<"the favch of arsh is "<<arsh.favch<<endl;
cout<<"the salary of arsh is "<<arsh.salary<<endl;

un m1;
m1.cash=500;
//m1.edudaction='e'; ///error
cout<<m1.cash<<endl;

enum point one;
one=jq;
cout<<jq;



  return 0;
}
*/

///******LECTURE 15*******FUNCTION NAD FUNCTION PROTOTYPE
/*
#include<iostream>
using namespace std;


int sum(int a,int b); // here and are formal parametrs
 //int sum(int,int); ---accepetable

void greet(){  /// here we can also write greet(void)
  cout<<"good morning";
}


int main(){

 int n1,n2; /// they are actual parameter

 cout<<"enter a n1"<<endl;
 cin>>n1;
 cout<<"enter a n2"<<endl;
 cin>>n2;

 cout<<sum(n1,n2)<<endl;

greet();



  return 0;
}

int sum(int a,int b){

   return a+b;
}
*/

/// ****LECTURE 16*****

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

//// *******LECTURE 17********* INLINE FUNCTION

/*

#include<iostream>
using namespace std;

 inline int product(int a,int b){ ///not use inline function with static function


  return a*b;
}

//int product(int a,int b){ ///not use inline function with static function
 //static int c=0;
 //c=c+1;
 // return a*b+c;
//}

// defaut arguments in c++
int bank(int money,float intrest =1.04){

     return money*intrest;
}
 int main(){
int a=4,b=8;

cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;

cout<<bank(100000,1.10)<<endl; // u can also over write defaut value during  function call we also have a const variable





  return 0;
}

*/

//****LECTURE 18****** RECURSION
/*
#include<iostream>

using namespace std;

int factorial(int a){
if (a==0 || a==1){
  return 1;

}
else{
  return a*factorial(a-1);
};

}

int fab(int n){
  if (n<2)
  {
    return 1;
  }

  return fab(n-1)+fab(n-2);


}



int main(){
int b;
b=factorial(3);
cout<<b<<endl;
cout<<fab(6);

  return 0;
}

*/

//*******LECTURE 19***** FUNCTION OVER LOADING
/*
#include<iostream>
using namespace std;
int volume(int r,int h){

return (3.14*r*r*h);
}

int volume(int l,int b, int h){

  return l*b*h;
}
int main(){

  cout<<"volume of cylinder "<<volume(2,10)<<endl;
  cout<<"volume of rectanngle is "<<volume(10,10,10)<<endl;



  return 0;
}

*/

/// *******LECTURE 20 **** OBJECT ORIENTED PROGRMING

/* WHY OOPS?

1.c++ language was designed with the main intention of addimg oject-oriented features to c language

2.as the size the size of program increase,readability,maintainability and bug -fre nature of program
 was decrease

3.this was major problem in languages like c ehich relied upon functions or procedures

4.as a,result the posibility of not adreesing the problem in an effective manner was high.

5.also, as data was almost neglected , data security was easily compromised.

6.Using classes solves this problem by modeling program as a real world scenario.


****PROCEDURE ORIENTED PROGRAMMING**** -->pop

1. consist of writing a set of instruction for the computer to flow.

2.main focus is on function not on flow of data

3.functions can either use local and global data.

4.data moves openly from function to  function


********OBEJECT ORIENTED PROGRAMMING*********

1.work on the concept of classes and objects

2.a class is a template to create object.
 
3. treats data as a critiacal elment. --->  // private/public

4.decompose the problem in object and builds data and function around the objects



***********BASIC CONCEPT OF OOP********

1.Classes- basic template for craeting objects.

2.objects - basic run time entities.

3.data abstraction & encapsulation - wrapping data and function into single unit.

4.inheritance- properties of one clas can be inherited into other.

5.plymorphism- ability to take more tham one forms.

6.data binding- code which will execute is not known until the program runs. --> program greet(good morning,afternon,night etc) user using time it depend on run time

7. message passing - objects.messege(information) call format


*************** BENEFITS OF OOPS*********

1. better code reusability using objects and inheritance.

2.principle of data hiding helps build secure systems.

3.multiple objectrs can co-exist without any interference.

4.software complexity can be easily managed.


 */

//*********LECTURE 21*********** CLASSE,PUBLIC AND PRIVATE ACCESS MODIFIERS IN C++
/*
#include<iostream>
using namespace std;

class employee{

private:
 int a,b,c;

public:
int d,e;
void setdata(int a1,int b1,int c1);
void getdata(){

cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;

}
};

void employee :: setdata(int a1,int b1,int c1){


  a=a1;
  b=b1;
  c=c1;
}


int main(){

employee arsh;
arsh.d=40;
arsh.e=50;
arsh.setdata(10,20,30);
arsh.getdata();




  return 0;
}

*/

//**********LECTURE 22 *******NESTING OF MEMBERS FUNTION IN C++

/*
*OOPS-> calsses and objects

*c++ --> initially called --> c with classes
*class--> extension of structure (in  c)
*structures had limitations
       -members are public
       -no methods
*classes---> structures +more
*classes --> can have method and properties
*classes--> can make few members as private & few public
*structure in c++ are typedefed
******you can declare objects along with the class declaration like this:****
        class employee{

           // class declaration

        }arsh,harry,rohan;

 harry.salray=8 make no sense if salary is private


*/
/*
#include<iostream>
#include<string>
using namespace std;

class binary{
//private;  bu default class members are private
string s;

public:
void read(void);
void check_bn(void);
void revers(void);
void display(void);

};

 void binary :: read(void){
        cout<<"enter a binary no "<<endl;
        cin>>s;
 }

void binary :: check_bn(void){

        for (int i = 0; i < s.length(); i++)
        {
          if (s.at(i) !='0' && s.at(i) !='1')
          {
            cout<< "incorrect binary format"<<endl;
            exit(0);
          }

        }
 }

void binary ::revers(void){
check_bn();
for (int i = 0; i < s.length(); i++)
{
  if (s.at(i) == '0'){
     s.at(i)='1';
}
else {
  s.at(i)='0';
}

}
}

void binary :: display(void){

    cout<<"no is "<<s<<endl;

}


int main(){
binary no;
no.read();
//no.check_bn();  if we private it then  from her we cant use it // 2. we call check binary upside inside
                          // the revers fuction  this is called member nessting

no.revers();
no.display();



  return 0;
}
*/

//*****LECTURE 23**********object memory alloction and using array in c++
/*
#include<iostream>   /// compiler of c++ store common things for object one time in unity

using namespace std;

class shop{

int itemid[100];
int itemprice[100];
int counter;
public:

void initcounter(void){counter=0;}
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

 arsh.initcounter();
 arsh.setprice();
  arsh.setprice();
   arsh.setprice();
 arsh.getprice();



  return 0;
}

*/

//*********LECTURE 24**** STATIC DATA MEMBERS & METHODS/function IN C++
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
//********** lecture 25 ARRAY OF OBJECT AND PASSING OBJECT IN FUNCTION ARGUMENTS**********
/*
#include<iostream>
using namespace std;


class employee{

 int id;
 int salary;

 public:
 void setid(void){
  salary=122;
  cout<<"enter ther id of employee "<<endl;
  cin>>id;
 }

 void getid(void);


};

void employee::getid(void){

  cout<<"the id of employee is "<<id<<" and salary of employee is "<<salary<<endl;

}

int main(){

employee arsh[3];


for (int i = 0; i < 3; i++)
{
  arsh[i].setid();
}



for (int i = 0; i < 3; i++)
{
  arsh[i].getid();
}



  return 0;
}
*/
/*
#include<iostream>

using namespace std;

class complex{
int a;
int b;
public:
void setdata(int v1,int v2){

  a=v1;
  b=v2;

}

void setdatabysum(complex a1,complex a2){

 a=a1.a +a2.a;
 b=a2.b+a1.b;

}

void display(void){

 cout<<" ur complex no is "<<a <<" i"<<b<<endl;
}


};

int main(){

   complex c1,c2,c3;
   c1.setdata(1,3);
   c1.display();

   c2.setdata(4,2);
   c2.display();


   c3.setdatabysum(c1,c2);
   c3.display();



  return 0;
}
*/
/*
//*******LECTURE 26******** friend function


// 1+ 4I
// 5+ 8I

//6 +12I
#include<iostream>

using namespace std;

class complex{
int a;
int b;
public:
// belowline means that non members -
friend  complex sumcomplex(complex o1,complex o2); we can declare it in public/private
void setdata(int v1,int v2){

  a=v1;
  b=v2;

}


void display(void){

 cout<<" ur complex no is "<<a <<" i"<<b<<endl;
}


};

complex sumcomplex (complex o1, complex o2){
 complex o3;
 o3.setdata((o1.a+o2.a),(o2.b+o1.b));
 return o3;

}

int main(){

   complex c1,c2,sum;
   c1.setdata(1,4);
   c1.display();

   c2.setdata(5,8);
   c2.display();


   sum=sumcomplex(c1,c2);
   sum.display();






  return 0;
}
*/
// properties of friend function

/*
 1. not in the scope of class
 2.since it is not of the class , it cannot called from the object of that class .
 c1.sumcomplex()==invalid
 3. can be invoked without the helps of any object
 4.usually conatain the object as arguments
 5.can be declarared inside public or private section of the class
 6.it cnnot acces the members directly by their names and need objects_name.member_name
 to acess any members


*/

//*******LECTURE 27*****FRIEND CLASSES & MEMBERS FRIEND FUNCTION IN C++
/*
#include <iostream>
using namespace std;

// forward declaration


class complex;

class calculator
{

public:
  int add(int a, int b)
  {

    return (a + b);
  }
  int sumrealcomplex(complex , complex );

   int sumimgcomplex(complex, complex);


};

class complex
{
  int a;
  int b;
  // individual function as friend
  friend int calculator ::sumrealcomplex(complex o1, complex o2); // for members to friend
  friend int calculator ::sumimgcomplex(complex o1, complex o2);// for members to friend
// declaring a entire class as friend

// friend class caculator;

public:
  void setdata(int v1, int v2)
  {

    a = v1;
    b = v2;
  }

  void display(void)
  {

    cout << " ur complex no is " << a << " i" << b << endl;
  }
};


int calculator :: sumrealcomplex(complex o1, complex o2)
  {

    return (o1.a + o2.a);
  }

int calculator :: sumimgcomplex(complex o1, complex o2)
  {

    return (o1.b + o2.b);
  }
int main()
{

  complex c1, c2;
  c1.setdata(1, 4);
  c1.display();

  c2.setdata(5, 8);
  c2.display();


 calculator calc;
 int reslt=calc.sumrealcomplex(c1,c2);
 cout<<reslt<<endl;
 int res2= calc.sumimgcomplex(c1,c2);
 cout<<res2<<endl;

  return 0;
}

*/

//*****LECTURE 28****** MORE ON FRIEND FUNCTION
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

//******************** swaping values of objects

/*
#include<iostream>
using namespace std;

class y;

class x{
int data1;
friend void excahange(x &,y &);

public:

void setdata(int val1){

  data1=val1;

}

void display(void){

 cout<<data1<<endl;

}

};


class y{
int data2;
friend void excahange(x &,y & );
public:

void setdata(int val2){

  data2=val2;

}
void display(void){

 cout<<data2<<endl;

}


};


void exchange(x &a1,y &a2){

 int temp=a1.data1;
 a1.data1=a2.data2;
 temp=a2.data2;


}


int main(){

x a;
a.setdata(5);

y b;
b.setdata(5);

excahange(a,b);

a.display();
b.display();



  return 0;
}

*/

//******** LECTURE 29 ****** CONSTRUCTOR
/*
#include<iostream>

using namespace std;

class complex{
 int a,b;
 public:

// creating a constructor
// constructor is aspecial member funstion with the same name as of the class
// it is used to initiallize the objects of its class
// it aumatially invoked whenever object is created
complex(void); // declaration of constructor

void display(void){

 cout<< a <<" b is "<< b<<endl;

}


};
complex::complex(void){  // --- this default contructor

  a=10;
  b=20;
  //cout<<"hello world "<<endl;

}
int main(){

complex ak;
ak.display();





  return 0;
}

/*
characterstic of constructor
1.it should be create in the public section
2.they are automatically invoked whenever object is created
3.they cannot return value and do not have a return types
4.it can have default arguments
5. we caanot refer to their adrees

*/

//*****lecture 30 parameterized constructor***
/*
#include<iostream>
using namespace std;


class complex{
int a;
int b;
public:

complex(int a1,int b1);
void display(void){

  cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;
  }



};

complex::complex(int a1=10,int b1=20){

a=a1;
b=b1;

}



int main(){
// implicit  call
complex a;
a.display();
// explicit
complex b=complex(500,800);
b.display();

  return 0;
}

*/
//**** lecture 31 CONSTRUCTOR OVERLOADING*******
/*
#include<iostream>

using namespace std;

class complex{
int a;
int b;
public:

complex(int a1,int b1);
complex(void);
void display(void){

  cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;
  }



};

complex::complex(int a1,int b1){

a=a1;
b=b1;

}

complex::complex(void){

  a=500;
  b=0;
}
int main(){
complex a1;
a1.display();

complex b1(1000,5000);
b1.display();




  return 0;
}

*/

//*****LECTURE 33  DYNAMIC INITIALISTAION OF OBJECTS USING CONSTRUCTORS**********

/*
#include<iostream>
using namespace std;

class bankdeposit{
int principal;
int years;
int interestrate;
int returnvalue;

public:
   bankdeposit(){}
   bankdeposit(int p,int y,float r); /// r can be 0.04
   bankdeposit(int p,int y,int r);// r can be 10,20 etc
    void show(void);
};

bankdeposit::bankdeposit(int p,int y,float r){

  principal=p;
  years=y;
  interestrate=r;
  returnvalue=principal;

  for (int i = 0; i < y; i++)
  {


      returnvalue= returnvalue*(1+r);
  }

}

bankdeposit::bankdeposit(int p,int y,int r){

  principal=p;
  years=y;
  interestrate=r;
  returnvalue=principal;

  for (int i = 0; i < y; i++)
  {
    returnvalue= returnvalue*(1+r);
  }

}

void bankdeposit::show(void){
 cout<<endl<<"the pricipal amount was "<<principal<<endl
 << " return value after "<<years
 << " is "<<returnvalue<<endl;


}


int main(){
bankdeposit bd1,bd2,bd3;
int p,y;
float r;
int a;

cout<<" enter the value of p & y & r"<<endl;
cin>>p>>y>>r;
bd1.show();




  return 0;
}

*/
/*
#include<iostream>
using namespace std;

class bankdeposit
{
private:
  int pricipal;
  int year;
  int interestrate;
  int returnvalue;
public:

   bankdeposit(void){}
   bankdeposit(int p,int y,int r){
    pricipal=p;
    year=y;
    interestrate= r;
     returnvalue=pricipal;


    for (int i = 0; i < y; i++)
    {
      returnvalue+= (pricipal*year*interestrate)/100;
    }


   }
   bankdeposit(int p,int y,float r){
    pricipal=p;
    year=y;
   float(interestrate)= r;
    returnvalue=pricipal;

    for (int i = 0; i < y; i++)
    {
      returnvalue+= pricipal*year*interestrate;
    }

   }




    void show(void){
 cout<<endl<<"the pricipal amount was "<<pricipal<<endl
 << " return value after "<<year
 << " is "<<returnvalue<<endl;
    }

};

int main(){
bankdeposit bd1,bd2,bd3;
int p,y;
float r;
int R;

cout<< " enter the value of p y and r"<<endl;
cin>>p>>y>>r;
bd1=bankdeposit(p,y,r);
bd1.show();


cout<< " enter the value of p y and r"<<endl;
cin>>p>>y>>R;

bd2=bankdeposit(p,y,R);
bd2.show();



  return 0;
}

*/



///*****LECTURE 34 COPY CONSTRUCTOR ******
/*
#include<iostream>
using namespace std;

class number{
int a;
public:

number(){}

number(number &obj){ // copy constructor /
                                         // if we remove copy constructor then the default cons get run
                                         // copmpiler supplied its own cpy constyructor
  a=obj.a;
}
number(int num){
  a=num;
}
void show(void){
  cout<<" the number for this object is "<<a<<endl;
}



};

int main(){
number x,y,z,z2;

x=number(50);
x.show();

number z1(x);  // we can also call cpoy construcor like this number z1=x;
z1.show();

z2=z; // here no constructor call because it only call when the object is made in line
number z2=z1;  //constructor is called
z2.show();
  return 0;
}

*/

//*****LECTURE 35 DESTRUCTOR
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

//*******LECTURE 36 ****** INHERITANCE

/*
  FOLLOW DRY PRINCIPLE = DONT REAPEAT YOURSELF
INHERITANCE IN C++ OVERVIEW
1. REUSABILITY IS VERY IMPORTANT FEATURE OF OOPS
2.IN C++ WE CAN REUSE A CLASS AND ADD ADDITIONAL FEATURE TO IT
3.REUSING CLASSES SAVES TIME AND MONEY
4.REUSING ALREDY TESTED AND DEBUGGED CLASS WILL SAVE A LOT OF EFFORT OF DEVLOPING
 AND DEBUGGING THE SAME THING AGAIN


 WHAT IS INHERITANCE IN C++

 1.concept of reusability in c++ is supported inheritance
 2.we can reuse the property of an exiting class by inheriting from it
 3.the existing class is called as the base class
 4.the new class which is inherited is called as the drived class
 5.reuing classes saves time and money
 there arediffernt types of inheritance inc++


 SINGLE INHERETANCE

    A
    |
    |
    B

MULTIPLE INHERETANCE

   A       B
   |       |
   |_______|
       |
       |
       C

HIERARCHIAL INHERTANCE




         C
         |
         |
     A_______B


   MULTILEVEL INHERTANCE

   DERIVING CLASS FROM ALREDY DRIVED CLASS

           A
           |
           |
           B
           |
           |
           C

HYBRID INHERITANCE IN C++

1.HYBRID INHERTANCE IS A COMBINATION OF MULTIPLE AND MULTILEVEL INHERITANCE

2.A CLASS IS DRIVIED FROM TWO CLASSES IS CALLED MULTIPLE INHERITANCE

3.HOWEVER ONE OF THE PARENT CLASSES IS NOTA BASE CLASS



         A
         |
         |
     B_______C
     |       |
     |_______|
         |
         |
         D
         */

//*******LECTUTRE 37 SYNTAX OF INHERETANCE ***********

/*
#include<iostream>
using namespace std;



class employee{
public:
int id;
int salary;

employee(int sid){

  id=sid;
  salary=55;
}

employee(){}



void getdata(){
cout<<" the id of employee is "<<id<<endl
<<" the salry of employye is "<< salary;

}

};

class programmer :  public employee{
public:

programmer(int idd){

  id=idd;
  salary=50;
}
int languagecode=25;
void getdata(){
cout<<" the id of employee is "<<id<<endl
<<" the salry of employye is "<< salary;

}


};

int main(){

employee gk(40);
//ak.setdata(50,1000);
//ak.getdata();

//programmer gk(50);
//gk.languagecode;
//gk.setdata(4,5);
gk.getdata();

  return 0;
}

*/

//*******LECTUTRE 38 single INHERETANCE ***********
/*
#include<iostream>
using namespace std;

class base
{
private:
  int data1;
public:
int data2;
 void setdata(int a, int b){
  data1=a;
  data2=b;
 }
 int getdata1(){
  return data1;

 }

  int getdata2(){

    return data2;
  }
};


class derived : base {

public:
int data3;
void process(void){
  setdata(10,50);       // if we private this class we use setdata fun in procees which is public function
  data3=data2*getdata1();
}

void display(void){

  cout<<" the data 1 is "<<getdata1()<<endl;
  cout<<" the data 2 is "<<getdata2()<<endl;
  cout<<" the data 3 is "<<data3<<endl;
}

};




int main(){

derived der;
//der.setdata(10,50);
der.process();
der.display();


  return 0;
}
*/

//******LECTURE  PROTECTED ACEESS MODIFIER******
/*
#include<iostream>
using namespace std;

class base
{
protected:     // a variable act like privte but it can inherited
 int a;
 private:
 int b;
 public:
 int c;

void setdata(int a1=10,int c1=20){
    a=a1;
    c=c1;
  }
};
*/
/*
for a protected members:
                public derivation          priavte derivation           protected derivation
  1.private      not inherited                 not inherited              not inherited
  2.protected    protected                     private                       protected
  3.public       public                        private                        protected



*/

/*
class derived : public  base {


  //derived(int a1,int c1){

  //  a=a1;
  //  c=c1;

  //}

public:
   void display(void){

  cout<<" the a  is "<<a<<endl;
  cout<<" the  c is "<<c<<endl;


}
};


int main(){

  derived der;
 der.setdata();
 der.display();



  return 0;
}

*/
//***********LECTURE 40  MULTILEVEL INHERETANCE **********
/*
#include <iostream>
using namespace std;

class student
{

protected:
  int rollno;

public:
  void set_rollno(int a)
  {
    rollno = a;
  }
  void get_rollno(void)
  {
    cout << " roll no is  " << rollno << endl;
  }
};

class exam : public student
{
protected:
  float maths;
  float physic;

public:
  void setmarks(float a1, float a2)
  {
    maths = a1;
    physic = a2;
  }

  void getmarks(void)
  {
    cout << " mraks in maths  " << maths << endl;
    cout << " mraks in physic  " << physic << endl;
  }
};

class result : public exam
{

  float percentage;

public:
  void display(void)
  {
    get_rollno();
    getmarks();

    cout << " your pertcentage is " << (maths + physic) / 2 << endl;
  }
};
int main()
{

  result arsh;
  arsh.set_rollno(420);
  arsh.setmarks(80, 60.5);
  arsh.display();
  return 0;
}
*/

//**********LECTUER 41 ***** MULTIPLE INHERITANCE DEEP DIVE
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

///****** lectuer 42 ******
/*
#include<iostream>
#include<cmath>
using namespace std;

class simplecal{
protected:

int num1,num2;

public:

void setdata(int a,int b){
  num1=a;
  num2=b;
}
void res1(void){

  cout<<" the  num1 +num2 is "<<num1+num2<<endl;
  cout<<" the  num1 -num2 is "<<num1-num2<<endl;
  cout<<" the  num1 *num2 is "<<num1*num2<<endl;
  cout<<" the  num1 /num2 is "<<float(num1/num2)<<endl;
}
};

class sintificcal{
protected:

int num;

public:

void setdata1(int a1){
  num=a1;

}
void res2(void){

   cout<<" the  num square is "<<sqrt(num)<<endl;
   cout<<" the  num cube is "<<cbrt(num)<<endl;
   cout<<" the  num log is "<<log(num)<<endl;
   cout<<" the  num log is "<<log10(num)<<endl;

}
};


class hybrid: public simplecal, public sintificcal {
   protected:
   int no;
   public:

   void callcal(void){
    res1();
    cout<<"****************************"<<endl;
    res2();
   }


};

int main(){

hybrid hb;
hb.setdata(10,5);
hb.setdata1(10);
hb.callcal();

  return 0;
}

*/

//******LECTURE 43 AMBIGUITY RESOLUTION ********
/*
#include<iostream>
using namespace std;

class base1{

  public:
  void greet(void){
    cout<<" hello i am base1"<<endl;
  }
};

class base2{

  public:
  void greet(void){
    cout<<" hello i am base2"<<endl;
  }
};

class derived:public base1,public base2{
 public:
  void greet(void){

    base2::greet();
  }
};


int main(){

  derived der;

  der.greet();




  return 0;
}
*/

//**********************************
/*
#include<iostream>
using namespace std;

class base1{

  public:
  void greet(void){
    cout<<" hello i am base1"<<endl;
  }
};


class derived:public base1{
 public:
  void greet(void){

     cout<<" hello i am derived"<<endl;

  }
};


int main(){

  derived der;

  der.greet();


  return 0;
}

*/
//*******LECTURE 44 ,45 *********** VIRTUAL BASE
/*
#include<iostream>
using namespace std;

// students = test
// students =sports
// test=result
//sports=result

class student{  // here student is a virtual base class
protected:
int rollno;
public:
  void setRNO(int a){

    rollno=a;
  }

  void print_rollno(void){

    cout<<" our roll no is "<<rollno<<endl;
  }

};

class test: virtual public student{

     protected:
     float maths,physic;
     public:

      void setmarks(float a1, float a2)
  {
    maths = a1;
    physic = a2;
  }

  void getmarks(void)
  {
    cout << " mraks in maths  " << maths << endl;
    cout << " mraks in physic  " << physic << endl;
  }

};


class sports: virtual public student{
  protected:
  float score;
  public:
    void setscore(float a){

    score=a;
  }

  void print_score(void){

    cout<<" your score no is "<<score<<endl;
  }

};

class result: public test,public sports{
    private:
    float total;

    public:

    void callres(void){
       total=maths+physic+score;
       print_rollno();
       getmarks();
       print_score();
       cout<<" total score is "<<total<<endl;
    }


};

int main(){
 result rrr;
 rrr.setRNO(420);
 rrr.setmarks(55.5,60.5);
 rrr.setscore(30);
 rrr.callres();




  return 0;
}
*/

//**** LECTURE 46,48 CONSTRUCTOR IN DERIVED CLASS*******   47 =42 LECTURE

/*

#include<iostream>>
using namespace std;

class base1{
protected:
int data1;
public:

 base1(int a){
  data1=a;
  cout<<" base 1 constructor is call"<<endl;
}

void getbase1(void){

  cout<<" the data1 is "<< data1<<endl;
}

  ~base1(){
    cout<<" base1 destroy "<< endl;
  }
};

class base2{
protected:
int data2;
public:

 base2(int b){
  data2=b;
  cout<<" base 2 constructor is call"<<endl;
}

void getbase2(void){

  cout<<" the data1 is "<< data2<<endl;
}

   ~base2(){
    cout<<" base2 destroy "<< endl;
  }
};

class derived: public base1,public base2{
  protected:
  int data3,data4;
  public:
  derived(int a,int b,int c,int d):base1(a),base2(b){

      data3=c;
      data4=d;

      cout<<" derived constructor is call"<<endl;

  }

   void display(void){

      cout<<" the value of data1 is "<<data1<<endl;
      cout<<" the value of data2 is "<<data2<<endl;
      cout<<" the value of data3 is "<<data3<<endl;
      cout<<" the value of data4 is "<<data4<<endl;
   }


   ~derived(){
     cout<<" derived destroy "<<endl;
   }
};



int main(){
derived der(1,2,3,4);
der.display();



  return 0;
}


*/

//*************LECTURE 49 ******** INITILIZATIN IN CONSTRUCTOR***

/*
syntax for initilization list in constructor:
constructor (argument-list) : initilization -section
{
  assignment +other code;

}
class test{
  int a;
  int b;
  public:
     test(int i, int j): a(i),b(j){
      cout<<" constructor executed "<<endl;
      cout<<" value of a is "<<a<<endl;
      cout<<" value of b is "<<b<<endl;
     }
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

//******LECTURE 50 REVISITNG POINTER: NEW AND DELET KEYWORDS IN CPP***

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

//*********lecture 51 pointer to object ******
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

//complex c1;
//complex *ptr= &c1;
//complex *ptr= new complex;
//(*ptr).setdata(10,20);
//(*ptr).show();

//arrow operator
//complex *ptr= new complex;
//ptr->setdata(10,20);     // iska mtlab hai ptr jis object ko point kar raha uska setdata
//ptr->show();


// arrry of objects
complex *ptr= new complex[4];
ptr->setdata(10,20);
ptr->show();


return 0;
}
*/

//*********lecture 52*********array of object using pointer******
/*
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
     ptr->setdata(p,q);
     ptr++;

}


for ( i = 0; i < size; i++)
{


     // *ptr.setdata(p,q);
     ptrtemp->getdata();
     ptrtemp++;

}


  return 0;
}

*/

//******LECTURE 53 THIS POINTER ********
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

//*******LECTURE 54******* POLYMORPHISM IN C++*******
/*
POLY-> MANY
MORPHISM-> FORM

- ONE NAME MANY FORMS
- EG. FUNCTION OVERLOADIN,OPERATOR OVERLOADING
- EG.VIRTUAL FUNCTION

  POLYMORPHISM IS OF TWO TYPE-:

  1.COMPILE TIME POLYMORPHISM( complie time mai descion le liya zata hai konsa function call hone walla hai)
                                (aur  isko early binding and static binding bhi bolte hai, because ye objects ke sath bind kar deta hai function ko zo run hone wala hai)
                                 (aur compile time poly morphism c++ ke andar 2 tarha se achive ki zate hai)
                                 compile time polymorphism can achieved using->
   a.function overloading-
     ex->
         void call(int a,int b);
         void call(int a,int b,int c);

         same name but take different arguments

   b.operator overloading-

      explantion->
         - by using operator overloading we gives c++ operator addition meaning
         - operator which cannot use in operator overloading
            1. class member access operator
                ( . , .* )
            2.scope resolution operator
               (::)
            3. sizeof operators
               sizeof(etc)
            4.conditional operator
                 ( : ?)

      defining operator overloading
        synatx->
            when we denfine it outside  the class
            returntype classname:: operator  symbol(+,-,*,/,%)(argument list){

            }

       synatx->
            when we denfine it inside  the class
            returntype operator  symbol(+,-,*,/,%)(argument list){

            }

         a++ is unary operator because it use one operand
         a+b  is binary operatror because it use two operand




  2.RUN TIME POLYMORPHISM -> it not follow the concept of binding
                             program run hone ki time decide hota hai
                              rum time polymorphism can achieved using->
         a.virtual fuction







*/

//***********lecture 55 pointer to drived class************
/*

#include<iostream>
using namespace std;


class base{
  public:
  int var1;
  void display(void){
   cout<<" the base display "<<var1<<endl;

  }
};

class drived: public base{
  public:
  int var2;
  void display(void){
   cout<<" the base display "<<var1<<endl;
   cout<<" the drived display "<<var2<<endl;
  }
};

int main(){
  base obj_base;
  drived obj_drived;

  base *base_ptr;
  drived *drived_ptr;
  //base_ptr=&obj_base;

  //base_ptr->var1=50;
  //base_ptr->display();

 //base_ptr=&obj_drived;
 //base_ptr->var1=40;
 //base_ptr->var2=30;   // it cannot acces drived class members
 //base_ptr->display();   // here the display fuction of base calss run becuase the ptr of base class this is called late binding


 //drived_ptr=&obj_drived;
 //drived_ptr->var1=403;
 //drived_ptr->var2=500;
 //drived_ptr->display(); // here display fun of drived class run if it not availale then base display run

  return 0;
}
*/

//******LECTURE 56 VIRTUAL FUNCTION-********
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
   cout<<" the base display "<<var1<<endl;
   cout<<" the drived display "<<var2<<endl;
  }
};

int main(){
  base obj_base;
  drived obj_drived;

  base *base_ptr;
  drived *drived_ptr;
  //base_ptr=&obj_base;

  //base_ptr->var1=50;
 // base_ptr->display();

 //base_ptr=&obj_drived;
 //base_ptr->var1=40;
 //base_ptr->var2=30;   // it cannot acces drived class members
 //base_ptr->display();   // here the display fuction of derived calss run //becuase the ptr of base class this is called late binding


 drived_ptr=&obj_drived;
 drived_ptr->var1=403;
 drived_ptr->var2=500;
 drived_ptr->display(); // here display fun of drived class run if it not availale then base display run

  return 0;
}
*/


//*******LECTURE 57 VIRTUAL FUNCTION EXAMPLE*********
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
 

  return 0;
}
*/
//*******************

// rules for virtual function
// they cannot be static
// virtual function can be a friend of another class
// a virtual function in base class might not be used.
//  if  a vitual fuction define in a base class there is no necessity of redefinig it in the derived class



//********LECTUER 58 ******** ABSTRACT BASE CLASS AND PURE FUNCTION
  /*
     1.abstract base class is a class which contain  at lest one  pure virtual function
            pure virtual function = it is a function in base abstract class which need
                                     to overwrite.  IF NOT otherwise ERROR
                     syntx-> virtual void display()=0; do nothing fun or pure virtual func
          suppose we creating a base class a class which and  if we know that we are define 
           a derived class from this class AND THIS CLASS CONTAIN PURE VIRTUAL FUN THIS IS
           CALLED ABSTRACT BASE CLASS. 
           
          other defination->
            a class from which an  object cannot define and it was designed to 
                  get inherited by another class is called abstract class
      */
/*
#include<iostream>
using namespace std;

 class base{
    protected: 
       int a;
       public:
      void setdata(int a){
          this->a=a;
      }
         virtual void display()=0;
         
};

class der1: public base{
    public:
       void display(void){
            cout<<" i am display of der1 the value of a is  "<<a<<endl;
       }
};

class der2: public base{
    public:
       void display(void){
            cout<<" i am display of der2 the value of a is  "<<a<<endl;
       }
};


int main(){

der1 d1;
d1.setdata(10);
d1.display();

der2 d2;
d2.setdata(20);
d2.display();

//base b; // we cannot create a object from abstract classs
//b.setdata(1); 
//b.display();


return 0;
}
*/


//********LECTUER 59,60 FILE I/O IN CPP*****

//#include<iostream>
//#include<fstream>


/*
the 3 useful classes for working in c++ are:
1.fstreambase                              |
2.ifstream --> derived from fstraembase    |  these classes come from <ftream> header file
3.ofstream --> derived from fstraembase    |



in order work with files in c++,you will have to open it, primarily ,there are 2 ways to open a file
1.using constructor
2. using the member function open() of the class
*/
/*
using namespace std;

                           


int main(){

  string st=" arsh bhai psitian hai ";
  string st2;
  // opeing file using constructor  and writing it u can also change name of write function,out,wr,etc
   //ofstream write("sample60.txt");  
   //write<<st;

   // opeing file using constructor  and reading  it here u can give name to read fun
   ifstream read("sample60.txt");  
    //read>>st2;             //only first letter 
   getline(read,st2);      // full line
    cout<<st2;

return 0;
}

*/

//******LECTURE 61 ********
/*
#include<iostream>
#include<fstream>

using namespace std;

int main(){
  string s[2];

  ofstream write("sample61.txt");
  cout<<" enter name ";
   cin>>s[0];
   write<<s[0] +" is my name ";

   write.close();

   ifstream read("sample61.txt");
   //read>>s[1];
   getline(read,s[1]);

   cout<<s[1];



  return 0;
}

*/

//****** lecture 62 reading/wriring file with memberfunction****
/*
#include<iostream>
#include<fstream>
#include<string>  // getline hota hai ismai

using namespace std;


int main(){
  string s,s2;
 ofstream write;
 write.open("sample62.txt");
 write<<" this is first line\n";
 write<<" this is second line\n";
 write.close();

 ifstream read;
 read.open("sample62.txt");
 //read>>s>>s2;
//cout<<s<<s2;
 while (read.eof()==0)
 {
  getline(read,s);
  cout<<s<<endl;
 }
 





  return 0;
}
*/

//**********lecture 64 templates in c++******
/*
#include<iostream>
using namespace std;

template <class T>
 class vector{
   public:
     T *arr;
     int size;
      vector(int size){
         this->size=size;
          arr= new T[size];
      }
    T dotproduct(vector &v){
      T d=0;
      for (int i = 0; i < size; i++)
      {
        
         d+=this->arr[i]* v.arr[i];
      }
      
     
      return d;   
    }
 }; 


int main(){
 vector <int> v1(3);
 v1.arr[0]=1;
 v1.arr[1]=2;
 v1.arr[2]=3;

 vector <int> v2(3);
 v2.arr[0]=1;
 v2.arr[1]=2;
 v2.arr[2]=3;
 
 int result;
 result=v1.dotproduct(v2);
 cout<<result;


  return 0;
}

*/


//******LECTURE 65 MULTI PARAMETRE TEMPALTE*********
/*
#include<iostream>
using namespace std;


template <class T1,class T2>
class complex{
 public:
  T1 data1;
  T2 data2;
    complex(T1 d1,T2 d2){
        
        data1=d1;
        data2=d2; 
    }
   void display(void){
     
     cout<<" the data1-> "<<data1<<endl; 
     cout<<" the data2-> "<<data2<<endl; 

   }
};
int main(){
  complex <float,char> c(1.5,'c');
  c.display();




  return 0;
}
*/


// *******lecture  66 with default parameter********
/*
#include<iostream>
using namespace std;
template <class T1=int,class T2=float>
class myclass{
 public:
    T1 data1;
    T2 data2;

    myclass(T1 a,T2 b){
         data1=a;
         data2=b;
         
    }
   
    void display(void){

        cout<<" the data1-> "<<data1<<endl; 
        cout<<" the data2-> "<<data2<<endl; 
    }

};

int main(){
  //myclass <> obj(10,10.5); // default
  myclass <char, char> obj('c','c');
  obj.display();

  return 0;
}
*/


// *******LECTURE 67 FUNCTION TEMPLATE********
   /* 

    IF U STUCK IN A SITUATION WHERE U NEED TO DECLARE MULTIPE FUNCTION JUST
    BECAUSE OF ITS FUNC(INT A,FLOAT D)/FUNC(CHAR A,INT D) USE TEMPALTE

    */
 /*
   #include<iostream>
   using namespace std;
   template <class T1,class T2>  // u can use multiple template in function
   float average(T1 a,T2 b){
         float avg;
         avg=(a+b)/2.0;
         return avg;   }

  template <class T>  
   void swaps(T &a,T &b){ 
     T temp=a; 
     a=b;
     b=temp;
         
   }


   
   int main(){
       float result;
       result=average(10.5,10);
       cout<<result;
   
    int a=5,b=7;
 cout<<a<<endl;
        cout<<b<<endl;

      swaps(a,b);
       cout<<a<<endl;
        cout<<b<<endl;


    return 0;
   }

*/

//********* member function template & overloading function tempalte*********
/*
#include<iostream>
using namespace std;

template < class T>
class arsh{
protected:
    T data1;
    T data2;
public:
      arsh(T a,T b): data1(a),data2(b){}
      void display();


  // void display(){
  // cout<<" data 1-> "<<data1<<endl;
  //cout<<" data 2-> "<<data2<<endl;
  //} 
 }; 
   template<class T>
 void arsh<T>::display(){
   cout<<" data 1-> "<<data1<<endl;
    cout<<" data 2-> "<<data2<<endl;
  } 
  

  // here we see that predefine function(exatact match) take  priorty over template fun 
  void fun( int a){                                          
     cout<<" i am func with predefine tempalte "<<a<<endl; 
  }
   
   template<class T1>
  void fun( T1 a){
     cout<<" i am func with fine tempalte "<<a<<endl;
  }
    
int main(){ 
  arsh <int> ak(10,20);
  ak.display();
  
  fun(10); // exact match run
  fun('c'); // templte function



  return 0;
}
*/

// **********lecture 69 STL(STANDARD TEMPALTE LIBARARY)*****

  /*

Introduction to stl-> competitive programing 
                       limited time hota hai
                          stl provede-> 
                                      resize arry,sort ,search etc;

stl -> standard tempalte libraray

libraray of what ? -> libray of generic classes and functions


history of stl? 
 two worker of hp alex,mery put component like (general purpose classes and function) in library so we can reuse it
                      
 why use stl? -> reuse: well tested components
               -> time saving

stl is used because its a good idea not reinvent the wheel

component of stl->
1.container
  -store data
  -use tempalte classes
2.algorithms
  -soring
  -scanning
  -use tempalte function
3.iterators
  -it is a object points to an element in a container
  -handeld just like pointer
  -connect algorithms with container

  *************************************************
    container->   |5|10|4|7| | | 
                 <----|---> 
                      |--> iterator move as instructed by the algo

*/              


//**********LECTUER 70 CONTAINER**************
 /*
  STL= CONTAINER + ALGO + ITERATORS
          |         |          |
    OBJECT WHICH    |       OBJECT WHICH POINT TO AN ELEMENT OF A CONTAINER   
    STORE DATA      |
                    |
              PROCEDURE TO
              PROCESS DATA
              SHORTS,SEARCH,ETC



  CONTAINER
  1.SEQUENCE CONTAINER->
    -they store data in linera fashion(e=element->1,2,a,b,etc)  e1->e2->e3->e4->e5  -list
                                                                                    -vector 
                                                                                    -dequeue    
    -if u store ur data in liner fashion ur searhing is not good
           example if want to find  a element at which position it present it take time 
                      because it read all element one by one from starting 

                      vector:- random access fast,insetion/del slow at middle,but fast at end
                      list:- random access slow
                            ins/del at middle and end is fast


  2.ASSOCIATIVE CONTAINER->(faster aceess of element,FASTER DELETAION,isn,searching,NO RANDOM ACCESS)
    - direct access
    -store data in tree like structure
    -example-> set/multiset/map/multimap


  3.DERIVED CONATINER
  -they can drived from both sequence and associative container
  -provide some good methods
  -real world modeling
  -example->stack(LIFO)/queue(FIFO)/priority queue

  **********************************************************
  WHEN TO USE WHICH CONATINER ?
  SEQUENCE CONATAINER-> 
    
  ->VECTOR
    1.RANDOM ACCESS IS FAST
    2.MIDDLE INSERTION/DELETAION =SLOW
    3.INSERTION AT END= FAST
    4.STORE DATA SIMILARY LIKE ARRY

  ->LIST
     1.RANDOM ACCESS IS SLOW
     2.MIDDLE INSERTION IS FAST
     3.INSERTION/DELETATION AT THE END ->FAST
 
 ASSOCIATIVE CONATINER->
     ALL OPERATION FAST EXCEPT RANDOM ACESS

 DERIVED CONTAINER->DEPEND ->DATA STRUTURE
 
 */



//********LECTURE 71 VECTOR********
/*
#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int> vec1;
  
  for (int i = 0; i < 4; i++)
  {
     
  }
  


  return 0;
}
           
  */