#include<iostream>
using namespace std;
int main(){
    int arr[12] = {0,1,0,0,0,1,1,1,0,0,1,0};
    int size =12;
    int countZero =0;
    int countOne = 0;
    for(int i =0;i<size;i++){
        if(arr[i]==0){
            countZero++;
        }
        if(arr[i]==1){
            countOne++;
        }
    }
    cout<<"Number of Zeros in the array : "<<countZero<<endl;
    cout<<"Number of Ones in the array : "<<countOne<<endl;

    
}