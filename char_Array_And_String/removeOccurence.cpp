#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "axxxxyyyyb";
    string part ="xy";
    int pos = s.find(part);
    while(pos != string :: npos){
        s.erase(pos,part.length());
        pos = s.find(part);
    }
    cout<<"The answer is :"<<s<<endl;
    return 0;
}