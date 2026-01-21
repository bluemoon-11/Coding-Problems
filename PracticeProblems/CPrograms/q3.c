// Wap in c to insert an integer with in a sorted integer array

// Sample input
// 5
// 12 45 67 89 92
// 73
// Output
// 12 45 67 73 89 92

#include<stdio.h>
void main(){
    int n,i,j,num;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    int arr2[n+1];
    i=0,j=0;
     while (j < n && arr[j] < num) {
        arr2[i++] = arr[j++];
    }
    arr2[i++] = num;
    while (j < n) {
        arr2[i++] = arr[j++];
    }
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr2[i]);
    }
    
}