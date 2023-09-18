#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int array[10]={5,3,5,7,8,9,23,100,67,6};
    int min = INT_MAX;
    for(int i =0; i<sizeof(array)/sizeof(int);i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<"Minimum number in the array is : "<<min <<endl;
}
