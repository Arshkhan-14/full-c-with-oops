#include<iostream>
#include<exception>  // lectuer 1
#include<stdexcept> // lecture 2 conatin all error like runtime etc
#include<string>
using namespace std;

void test(){   //lecture 4

      //throw 20;
      //throw 'c';
      throw runtime_error(" hahaha villan");
}

class overspeed:public exception{   // user define exception
 int speed;
 public:
    const char* what(){
       return" check out ur car speed \n you are not in airoplane \n";
    }
   
   void getspeed(){
      cout<<" your car speed is "<<speed<<endl;
   }

   void setspeed(int speed){
      this->speed=speed;
   }
 };

 class car{
 int speed;
 public:
   car(){
      speed=0;
      cout<<"speed is zero"<<endl;
   }
   void accelarate(){
      for (;;)
      {
         speed+=10;
         cout<<speed<<endl;
         if (speed>=250)
         {
            overspeed s;
            s.setspeed(speed);
            throw s;
         }
         
      }
      
   }

 };

 //*****user define exception 2

 class divide:public exception
 {
 public:
   
   const char *what()  const throw(){
       
       cout<<" you cant divide by zero"<<endl;

   }
   
 };
 
 
 
 


int main(){
  //int a,b,c;

  //cout<<"enter the value of a and b "<<endl;
  //cin>>a>>b;

//********LECTUER 1*******
/*
  try
  {
    if(b==0)
     throw " divide byzero error";
    c=a/b;
     cout<<" result is "<<c<<endl;
     
  }
  catch(const char *e){
  
  cout<<" exception occured due to "<<e<<endl;
  
  }
 
 */
   

//************LECTUER 2*************
/*
    EXCEPTION
1.std:bad_alloc
2.std:bad_cast
3.std:logic_failure
4.std:bad_typeid
5.std:bad_exception
6.std:runtime_error
7.std:domain_error
8.std:invalid_argumemt
9.std:length_error
10.std:out_of_range
11.std:overflow_error
12.std:range_error
13.std:underflow_error

*/
/*

 try
  {
    if(b==0)
     throw runtime_error("divide byzero error");
    c=a/b;
     cout<<" result is "<<c<<endl;
     
  }
  catch(runtime_error &error){
  
  cout<<" exception occured "<<endl;
  cout<<error.what();
  
  }

*/

// LECTURE 3 MULTIPLE CATCH BLOCK
/*
 try
 {
    //throw "exception";
    //throw(0);
     throw runtime_error(" runtime mai");
 }
 catch(const char *er)         // in case of  throw exception
 {
        cout<<er<<endl;
 }
 catch( int x){                // in case of throw 0
    cout<<x<<endl;
 }
 catch(runtime_error &e){   //   in case  of throw runtime_error

    cout<<e.what()<<endl;
 }

catch(...){             // it handle all type exception but priority is given to same match catch
                                          
     cout<<"some error occured"<<endl;
}

*/



// lecture 4 function throwing exception
 /*
 try
 {
    test();
 }
 catch(int e)
 {
    cout<<" integer type "<<e<<endl;
 }
 catch(char c)
 {
    cout<<" character type "<<c<<endl;
 }
 
 catch(runtime_error r)
 {
    cout<<"runtime error"<<r.what()<<endl;
 }

*/

//********lecture 5 ***nested try catch statement 
/*
 try
 {
    try{

        throw " a charcter type exception";
    }catch(const char *e){

        cout<<" execption occured in innner block"<<e<<endl;
         throw;
    } 
   
      
    }
   catch(const char *e){

        cout<<" execption occured in outter block block"<<e<<endl;
    } 

 */


//*********LECTURE 6 *************
 /*
  car obj;
  
  try
  {
    obj.accelarate();
  }
  catch(overspeed s)
  {
      cout<<s.what()<<endl;
      s.getspeed();
  }
  */


 // user defined exception 2
 divide dev;


int a,b,c;

cout<<"enter the value of a and b "<<endl;
cin>>a>>b;

try
{   

   if(a==b|| b==0){
      throw dev;
   }
   else{
   c=a/b;
   }
}
catch(exception& e)
{
   cout<< e.what() << '\n';
}









    return 0;
}
