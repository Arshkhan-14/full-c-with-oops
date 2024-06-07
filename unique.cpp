

#include<iostream>
#include<string>
#include <algorithm>

using namespace std;


int main(){
    string myvector="haa111111padtahjd" ;

    unique(myvector.begin(), myvector.end());  

    cout<<myvector;


    return 0;
}