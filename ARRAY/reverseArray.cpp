#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int start=0;
    int end= 9;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<=9;i++){
        cout<<arr[i]<<endl;
    }
}