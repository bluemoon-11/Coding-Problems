// Write a program in c 
// To print non repeating elements from an integer array
// Sample input
// 8
// 12 3 3 4 5 12 6 12
// Output
// 4 5 6
#include <stdio.h>
#include <limits.h>
void main(){
    int n,i,max=INT_MIN;
    scanf("%dd",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max) max = arr[i];
    }
    int frq[max+1];
    for(i=0;i<max;i++){
       frq[i]=0;
    }
    for(i=0;i<n;i++){
       frq[arr[i]]+=1;
    }
    for(i=0;i<max;i++){
       if(frq[i]==1) printf("%d ",i);
    }
}