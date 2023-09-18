#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int array[10]={5,3,5,7,8,9,23,100,67,6};
    int MAX = INT_MIN;
    for(int i =0; i<sizeof(array)/sizeof(int);i++){
        if(array[i]>MAX){
            MAX=array[i];
        }
    }
    cout<<"Max number in the array is : "<<MAX <<endl;
}