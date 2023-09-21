#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
double findMedianSortedArrays(vector<int>nums1, vector<int>nums2) {
        vector<int>ans;
        int i=nums1.size();
        int j = nums2.size();

        for(int k=0;k<i;k++){
            ans.push_back(nums1[k]);
        }
        for(int s=0;s<j;s++){
            ans.push_back(nums2[s]);
        }
        sort(ans.begin() , ans.end());
        int n = ans.size();
        double median ;
        if((n%2)==0){
            median = (ans[n/2]+ans[(n/2)+1])/2;
        }
        else{
            median =  ans[(n+1)/2];
        }
        return median;
    }
int main(){
    vector<int>nums1{2,4,6,8,10};
    vector<int>nums2{1,3,5,7,9};
    double ans = findMedianSortedArrays(nums1,nums2);
    cout<<"The median of the two sorted arrays are :"<<ans<<endl;
    return 0;
}