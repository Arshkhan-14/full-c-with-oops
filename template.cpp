

/*#include<iostream>

using namespace std;





template <class t>


class vector{

public:
t *arr;
 t size;

vector(t size){
      
      this->size=size;
   arr=new t[size];


}

t dotproduct(vector &v){
   t d=0;

   for(int i=0;i<size;i++){

    d+=this->arr[i]*v.arr[i];
    
   }
   
return d;


}};







int main(){

vector <int> v(3);
v.arr[0]=1;
v.arr[1]=2;
v.arr[2]=3;


vector <int> v1(3);
v1.arr[0]=1;
v1.arr[1]=2;
v1.arr[2]=3;

int result=v.dotproduct(v1);
cout<<result;


    return 0;
}


*/

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

    void display( );
    ~complex(){
    cout<<"destroctor is called"<<endl;
   }
   
   
};

template <class T1,class T2>
 void complex <T1,T2>::display(){
     
     cout<<" the data1-> "<<data1<<endl; 
     cout<<" the data2-> "<<data2<<endl; 

   }
int main(){
  //complex <float,char> c(1.5,'c');
  complex <int,char> c(10,'c');
  c.display();




  return 0;
}
