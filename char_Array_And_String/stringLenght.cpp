#include<iostream>
using namespace std;
int getLength(char arr[]){
    int length =0;
    int i=0;
    while(arr[i] != '\0'){
        length++;
        i++;

    }
    return length;
}
int main(){
    char arr[10] = "Akhilesh";
    int ans = getLength(arr);
    cout<<"The length of the string is "<<ans<<endl;
    return 0;
}