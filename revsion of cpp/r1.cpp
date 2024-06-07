
#include<iostream>


using namespace std;

int glo=10;


 int & ss(int  &b){

     return b;
 }
void ssum(){

  cout<<glo<<endl;
};

enum arsh{ak,bk,ck};

int main(){
int a=1;
float b=3.4;
char c='a';
char* arr[]={"arsh","khan"};
bool d=true;
double e=3.7828787;
int glo=20;
cout<<glo<<endl<<::glo<<endl;
ssum();
enum arsh aq;aq=bk;
cout<<a<<endl<<b<<endl<<c<<endl<<arr[1]<<endl<<d<<endl<<5<<endl<<sizeof(3.5l)<<endl<<aq;

 ss(a)=300;

cout<<"\n"<<a;






  return 0;

}