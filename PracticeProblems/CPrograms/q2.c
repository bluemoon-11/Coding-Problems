// Write a Program to sort First half in descending order and the Second in Ascending order

// Sample input
// 7
// 12 3 67 8 9 11 10
// Output
// 67 12 8 3 9 10 11
// Sample input
// 6
// 12 3 45 56 8 71
// Output
// 45 12 3 8 56 71

#include <stdio.h>
void swap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
void dsort(int*arr,int mid){
    int i,j,flag=0;
    for(i=0;i<=mid;i++){
        for(j=0;j<mid-i;j++){
            if(arr[j]<arr[j+1]){
                flag=1;
                swap(&arr[j],&arr[j+1]);
            }
        }
        if(!flag) break;
    }
}
void asort(int*arr,int n,int mid){
    int i,j,flag=0;
    for(i=mid+1;i<n;i++){
        for(j=mid+1;j<n - 1 - (i - (mid + 1));j++){
            if(arr[j]>arr[j+1]){
                flag=1;
                swap(&arr[j],&arr[j+1]);
            }
        }
        if(!flag) break;
    }
}
void main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mid =( n-1)/2;
    dsort(arr,mid);
    asort(arr,n,mid);
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}