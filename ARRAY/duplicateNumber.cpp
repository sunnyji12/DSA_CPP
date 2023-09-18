#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
int main(){


    vector<int>arr{3,3,5,6,7,6};
    //first aproach using STL by sorting and then checking the arr[i] and arr[i+1]
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                cout<<"The duplicate element is "<<arr[i]<<endl;
            }
        }
    }

}