#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>v,int size){
    int temp;
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
             temp =v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    vector<int>v{27,5,9,81,6,43,2,78,8};
    int size = v.size();
    bubbleSort(v,size);
    return 0;
}