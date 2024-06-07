#include<iostream>
#include<map>
using namespace std;


int main(){
 
 map<string,int> ak;

 ak["arsh"]=1000;
 ak["sharma"]=1000;
 ak["mishra"]=000;


map<string,int> ::iterator it;

it=ak.begin();

while (it!=ak.end())
{
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}

cout<<ak.size();
//ak.clear();
  


  it=ak.begin();




  std::map<char,int> mymap;
  char c;

  mymap ['a']=101;
  mymap ['c']=202;
  mymap ['f']=303;

  for (c='a'; c<'h'; c++)
  {
    std::cout << c;
    if (mymap.count(c)==1)
      std::cout << " is an element of mymap.\n";
    else 
      std::cout << " is not an element of mymap.\n";
  }



  



    return 0;
}