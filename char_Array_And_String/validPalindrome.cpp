#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "racecar";
    int i=0,e=a.length()-1;
    while(i<=e)
    {
        if(a[i] != a[e])
        {
            cout<<"String is not palindrome:"<<endl;
            break;
        }
        else
        {
            i++;
            e--;
           
        }
         
        if(i==e)
        {
            break;
        }
            cout<<"The string is palindrome"<<endl;
    }
        
        return 0;
}