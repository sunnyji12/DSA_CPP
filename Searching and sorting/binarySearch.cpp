#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{2,4,5,6,7,8,9,10};
    int target = 9;
    int start = 0, end = v.size()-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(v[mid]>target){
            end = mid -1;
        }
        else if(v[mid]==target){
            cout<<"The element is present at index :"<<mid<<endl;
            break;
        }
        else{
            start = mid+1;
        }
    }
    return 0;
}
