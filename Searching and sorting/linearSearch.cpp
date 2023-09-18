#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{2,3,4,5,6,1,9,8,0};
    int target = 8;
    for(int i =0;i<v.size()-1;i++){
        if(v[i]==target){
            cout<<"Element is present at index:"<<i<<endl;
        }
        else{
            cout<<"Element is not present in the array"<<endl;
        }
         
    }
    return 0;
}