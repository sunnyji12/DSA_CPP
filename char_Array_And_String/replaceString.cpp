#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    char arr[100];
    cout<<"Type any sentence"<<endl;
    cin.getline(arr,50);

    for(int i=0; i<strlen(arr);i++){
        if(arr[i] == ' '){
            arr[i] = '$';
        }
    }
    for(int i=0;i<strlen(arr);i++){
    cout<<arr[i];
    }

    return 0;
}
