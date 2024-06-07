#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


class Solution {
public:
    int isAnagram(string s, string t) {
         int n1,n2;
         n1=s.size();
         n2=t.size();
         if(n1>n2 ||n2>n1){
             return 1;
         }
         else{
                sort(s.begin(), s.end());
                sort(t.begin(), t.end());

               for(int i=0;i<s.size();i++){

                   if(s.at(i)!=t.at(i)){
                       return 1;
                   }
                   else{

                       return 0;
                   }
               }
                
         }
    }
};

int main(){

Solution a;
string s1="lalsa";
string s2="aall";


 int b=a.isAnagram(s1,s2);
 cout<<b;



    return 0;
};