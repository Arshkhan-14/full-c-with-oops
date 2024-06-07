#include<iostream>
#include<set>
using namespace std;


int main(){

multiset<int> s;
int n,c,m,sum=0;
cout<<"enter no of bags and minuts"<<endl;
cin>>n>>m;


 for(int i=0;i<n;i++){
    cout<<"enter no candie bags"<<i+1<<endl;
    int c;
    cin>>c;

    s.insert(c);


 }

  for (int i = 0; i < m; i++)
  {
    auto it=s.end();
    sum+=(*it);
    int k=(*it)/2;
    s.erase(it);
    s.insert(k);
     
    
    
  }
  

 cout<<sum;



    return 0;
}