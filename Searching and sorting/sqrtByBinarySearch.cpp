#include<iostream>
using namespace std;
int sqrt(int n){
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
    int target = n;
    int ans =0;
    // while(s<=e){
    //     if((mid*mid)==target){
    //         return mid;
    //     }
    //     if((mid*mid)<target){
    //         s = mid+1;
    //         ans = mid;
    //     }
    //     else{
    //         e = mid -1;
    //     }
    //     mid = s+(e-s)/2;
    // }
    double step =0.1;
    double finalAnswer=ans;
    
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number which is used to find the square root :"<<endl;
    cin>>n;

    int ans = sqrt(n);

    cout<<"The square root of the number is : "<<ans<<endl;
    return 0;
}