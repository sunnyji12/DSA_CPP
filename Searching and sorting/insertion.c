#include<stdio.h>
void insertionSort(int a[],int size){
    int i,j,temp;
    for(i=1;i<size;i++){
        temp = a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

int main(){
    int arr[]={25,17,31,13,2};
    int i;
    printf("Insertion Sort\n");
    printf("Array before sorting :\n");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }


    insertionSort(arr,5);

    printf("\n printing after sorting\n");
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}

