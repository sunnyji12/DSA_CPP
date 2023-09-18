#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main(){
    vector<int>arr{2,4,5,6,4,5};
    int i=0,j=arr.size();
    while(i<j){
        if(arr[i]==arr[j]){
            cout<<i<<endl;
            cout<<j<<endl;
           i++,j--;
        }
         
    }
}