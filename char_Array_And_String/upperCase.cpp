#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[100] = "akhilesh";
    for(int i=0;i<strlen(arr);i++){
        arr[i] = arr[i]-'a'+'A';
    }
    for(int i=0;i<strlen(arr);i++){
        cout<<"UpperCase is :"<<arr[i]<<endl;
    }
    return 0;
}