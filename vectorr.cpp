#include<iostream>
#include<vector>
#include <bits/stdc++.h>



using namespace std;

int main(){
/*
vector<int> v;
for (int i = 0; i <10; i++)
{
   v.push_back(i);
}

v.pop_back();
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i];
}

*/


vector <int> v(5,13);

 v.resize(3);


if(v.empty())
cout<<"yes";

vector <int> v1(5,200);

v.swap(v1);

for (int i = 0; i < v.size(); i++)
{
    cout<<v.at(i)<<" ";
}

vector <int> :: iterator it;
vector <int> :: iterator yt;
it=v.begin();
yt=v.end();
v.insert(it+2,v1.begin()+2,v1.end());
cout<<"\n";
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}

vector <int> :: reverse_iterator ct=v.rbegin();
int i=0;
cout<<"\n";
while (ct!=v.rend())
{
    cout<<*ct<<" ";
    ct++;
}


cout<<"\n";
/*
v.erase(v.begin()+3);
while (ct!=v.rend())
{
    cout<<*ct<<" ";
    ct++;
}
*/
cout<<*min_element(v1.begin(), v1. end());
cout<<*max_element(v.begin(), v. end());

cout<<endl;

string ss="dsvhjjncs";
sort(ss.begin(), ss.end());


return 0;

}