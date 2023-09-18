#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
double findMedian(vector<int>a,vector<int>b){
    vector<int>ans;
    ans=a;
    for(int i=0;i<b.size();i++){
        ans.push_back(b[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "<<endl;
    }
    int length = ans.size();
    cout<<"The lenght of the ans array is :"<<length<<endl;
    double median ;
    if((length % 2)==0){
        cout<<"Lenght is even"<<endl;
        median = ((ans[(length-1)/2])+ans[((length-1)/2)+1])/2;
    }
    else{
        cout<<"Length is odd"<<endl;
         median = ans[(length-1+1)/2];
    }
       
    // cout<<(ans[1]+ans[2])/2<<endl;
    return median;
}
int main(){
    vector<int>a{1,3};
    vector<int>b{2,7};
    double ans = findMedian(a,b);
    cout<<"Median of the two sorted array is : "<<ans<<" "<<endl;
    
    return 0;
}