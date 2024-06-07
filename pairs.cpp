#include<iostream>

using namespace std;



int main(){
  
  pair<int, int> p[5];

  int arr[5]={0,2,3,4,5};
  int arr2[5]={6,7,0,9,10};

    for (int  i = 0; i < 5; i++)
    {
         p[i]={arr[i],arr2[i]};
    }
    for (int  i = 0; i < 5; i++)
    {
        
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }

     for (int  i = 0; i < 5; i++)
    {
        
        if(p[i].first==0 || p[i].second==0){

          
          
            
        }
    }
    
    cout<<"\n";

  for (int  i = 0; i < 5; i++)
    {
        
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }



    return 0;
}