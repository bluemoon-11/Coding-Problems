// Write a program in C to find the majority element of an array.
// A majority element in an array A[] of size n is an element that appears more than n/2 times 
// Sample input
// 8
// 4 8 4 6 7 4 4 8

// Output
// No majority element 

// Sample input
// 6
// 2 3 2 2 4 2
// Output
// 2
// There are no Majority Elements in the given array.

#include<stdio.h>
#include<limits.h>
void main(){
    int n,max = INT_MIN,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max) max = arr[i];
    }
    int major = -1;
    int freq[max+1];
    for(i=0;i<max+1;i++){
        freq[i] = 0;
    }
    for(i=0;i<n;i++){
        freq[arr[i]]++;
        if(freq[arr[i]]>n/2){
            printf("%d",arr[i]);
            return;
        }
    }
    printf("\nNo majority element ");

}