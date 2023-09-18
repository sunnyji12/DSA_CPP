#include<iostream>
#include<vector>
using namespace std;
int findMissingElement(int *a,int n){
  for(int i=0;i<n;i++){
    int index = abs(a[i]);
    if(a[index-1]>0){
        a[index-1] *= -1;
    }

  }
  for(int i=0;i<n;i++){
    if(a[i]>0){
        cout<<i+1<<" "<<endl;
    }
  }
}
int main(){
    vector<int>a{2,4,5,3,3};
    int n=sizeof(a)/sizeof(int);
    int ans = findMissingElement(a,n);
    return 0;
}