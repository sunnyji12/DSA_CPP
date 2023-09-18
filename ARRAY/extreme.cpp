#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;
   while(start<end){
    
    cout<<arr[start] <<" ";
    cout<<arr[end]<<" ";
    start++;
    end--;
   }
     
   
}