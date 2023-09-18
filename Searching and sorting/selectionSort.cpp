#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>v,int size){
    int temp;
    for(int i=0;i<v.size()-1;i++){
        for(int j = i+1;j<v.size();j++){
            if(v[i]>v[j]){
                temp = v[i];
                v[i]= v[j];
                v[j]=temp;
                //using STL (Standard Tempelate liberary)
                // swap(v[i],v[j]);
            }
        }
    }
    cout<<"Printing the sorted array through selection sort"<<endl;
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    vector<int>v{5,63,43,67,99,6,78,23,90};
    int size = v.size()-1;
    selectionSort(v,size);
    return 0;
}