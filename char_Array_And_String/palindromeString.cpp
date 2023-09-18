#include<bits/stdc++.h>
#include<iostream>
using namespace std;
char palindrome(char arr[]){
     int i =0;
    int j =strlen(arr)-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            return true;
        }
        else{
            return false;
        }
    }
    
}
int main(){
    char arr[] = "NOON";
   
    int ans = palindrome(arr);
    cout<<"Is palindrom :"<<ans <<endl;
    return 0;
}
