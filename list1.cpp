#include<iostream>
#include<list>
#include <bits/stdc++.h>


bool single_digit (const int& value) { return (value<10); }

// a predicate implemented as a class:
struct is_odd {
  bool operator() (const int& value) { return (value%2)==1; }
};
using namespace std;

void display(list <int> &laaa){
   

   list <int> ::iterator it=laaa.begin();
    while (it!=laaa.end())
    {   

         
         cout<<*it<<" ";
        it++;
    }
    
    cout<<endl;
}

int main(){

int arr[]={1,23,4,5,6,78,83,62,8,4,6};
list <int> my(arr,arr+11);

 

display(my);
my.reverse();
display(my);
my.sort();
display(my);
my.unique();
display(my);
my.remove(23);
display(my);
my.remove_if(single_digit);
display(my);






    return 0;
}