#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr1{2,3,4,5};
    vector<int>arr2{1,3,4,9};
    vector<int>arr3{4,9,12,15};
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            for(int k=0;k<arr3.size();k++){
                if(arr1[i]==arr2[j] && arr2[j]==arr3[k] ){
                    cout<<" The common element is "<<arr1[i]<<endl;
                }
            }
        }
    }
}