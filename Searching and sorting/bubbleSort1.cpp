#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int>arr{18,1,7,6,14,9};
    int n = arr.size();
    //bubble Sort 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    

    //printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
 }