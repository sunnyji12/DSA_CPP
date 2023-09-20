#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{1,1,4,2,3};
    int x =5;
    int start=0;
    int end=0;
    int totalsum= accumulate(nums.begin(),nums.end(),0);
    int sum_to_make = totalsum-x;
    int ans = 0;
        int sum =0;
        
        while(end<nums.size())
        {  sum+=nums[end]; 
            
         while(start<end && sum>sum_to_make) 
         {
             sum-=nums[start++]; 
         }
         if(sum==sum_to_make) 
         {
             ans = max(ans,end-start+1); 
         }
         
           end++;
            
        }
        if(ans==0){
            cout<<"Not valid"<<endl;
        }
        else{
            cout<<"The minimum length for the operation to reduce x to zero is:"<<nums.size()-ans<<endl;
        }
        
}