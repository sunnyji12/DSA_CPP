#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int>v{1,3,4,5,5,5,5,5,6,7,8,9,10};
    int target=5;
    int s=0,e=v.size()-1;
    int ans = -1;
    while(s<=e){
        int mid= (s+e)/2;
        if(v[mid]==target){
            
            e = mid -1;
            // ans = mid;
            ans = mid;
            cout<<"Element is present at index :"<<ans<<endl;
        }
        else if(target<v[mid]){
            e = mid-1;
        }
        else if(target>v[mid]){
            s = mid+1;
        }
        else{
        cout<<"Element not found"<<endl; 
        return 0; 
        }
      
    }
    return 0;
}