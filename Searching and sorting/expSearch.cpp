#include<iostream>
using namespace std;
#include<vector>
int binarySearch(int a[],int start,int end,int x){
    int mid = (start+end)/2;
    while(start<=end){
        if(a[mid]==x){
            return mid;
        }
        else if(x>a[mid]){
            start =  mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int expSearch(int a[],int n,int x ){
    if(a[0]==x) return 0;
    int i =1;
    while (i<n && a[i]<=x){
        i= i*2;
    }
    return binarySearch(a, i/2, min(i, n-1) ,x);
}
int main(){
    int arr[]={2,4,5,6,7,};
    int x =5;
    int n = sizeof(arr)/sizeof(int);
    int ans = expSearch(arr,n,x);
    cout<<"The answe is : "<< ans <<endl;
    return 0;
}