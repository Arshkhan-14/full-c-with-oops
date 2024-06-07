#include<iostream>
#include<fstream>
#include<string>


using namespace std;


int main(){

string s[3];
string str2;

ofstream write;
write.open("sample60.txt");
cout<<"enter your name\n";
//cin>>s[0];

getline(cin,s[0]);
write<<s[0]+" is my name\n";
write<<"is second line\n";
write<<"third line";

write.close();


ifstream read;
read.open("sample60.txt");
read>>s[1];
cout<<s[1];


while (read.eof()==0)
{
   
   getline(read,s[1]);
   cout<<s[1]<<endl;
}
















    return 0;
}