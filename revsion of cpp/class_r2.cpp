
#include<iostream>
using namespace std;


class shop
{
private:
    int n;
     int *itemid=(int*)malloc(n*sizeof(int));
     int *itemprice=(int*)malloc(n*sizeof(int));

public:
    
     void start(){ cout<<"enter no of item"<<endl;
                        cin>>n;
     
     };
     void setdata(){
        for (int i = 0; i < n; i++)
        {
            cout<<"enter item id"<<endl;
         cin>>itemid[i];
         cout<<"enter item price"<<endl;
         cin>>itemprice[i];
        };
     }
         void display(){


        for (int i = 0; i < n; i++)
        {
            cout<<" item id"<<itemid[i]<<endl;
        
        
         cout<<"item price"<<itemprice[i]<<endl;
         
         
        }

         }

     
};







int main(){

shop  a;
a.start();
a.setdata();
a.display();







    return 0;
}