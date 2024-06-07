#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;


class bank
{
private:
     string s;
     void check( void){
              
              for (int i = 0; i < s.length(); i++)
              {
                 if (s.at(i)!='0' && s.at(i)!='1')
                 {   cout<<"wrobg format\n";
                     exit(0);
                 }
                 
              }
              

     }
public:
     void read(){
         
         cin>>s;
         check();
         
     }
void rev();


void display(){

    cout<<s<<endl;
}
    


};


 void bank::rev(){

    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        s.at(i)='1';
        else
        s.at(i)='0';
        //cout<<"\n";

    }
    
 }

int main(){
bank a;
a.read();
a.display();
a.rev();
a.display();





    return 0;
}