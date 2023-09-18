#include<iostream>
using namespace std;
int printRowSum(int arr[3][3],int rows,int cols){
    
    cout<<"Printing the row wise sum"<<endl;
       int sum=0;
    for(int i=0;i<rows;i++){
     
        for(int j=0;j<cols;j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
       
    }
    return 0;
}
int main(){
    int arr[3][3]={(2,3,4),(5,6,4),(2,3,6)};
    int result=printRowSum(arr,3,3);
  return 0;
}