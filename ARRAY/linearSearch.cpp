#include<iostream>
using namespace std;
// int linearSearch(int arr[5],int target){
    
    
// }
int main(){
    int arr[5]= {2,5,6,8,9};
    int target = 10;
    for(int i =0; i<5;i++){
        if(arr[i]==target){
            cout<< i<<endl;
        }
        else{
            cout<<"Element not found"<<endl;
            break;
        }
    }
    // int result = linearSearch(arr,target);
    
}