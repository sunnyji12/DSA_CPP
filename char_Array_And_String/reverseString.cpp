#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){
    char arr[10] = "Akhilesh";
    int i=0;
    int n =strlen(arr);
    int j =n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i =0;i<n;i++){
        cout<<"The reverse string is :"<<arr[i] <<endl;
    }
    return 0;
}