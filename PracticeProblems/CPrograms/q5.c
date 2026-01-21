// Write a prog to sort an user given integer array in descending order by taking O(nlogn)time
void merge(int *arr,int beg,int mid,int end){
    int i = beg,j = mid+1, index = 0, temp[end-beg+1];
    while(i<=mid && j<=end){
        if(arr[i]>arr[j]){
            temp[index]=arr[i];
            i++;
        }else{
            temp[index]=arr[j];
            j++;
        }
        index++;
    }
    if(i>mid){
            while(j<=end){
                temp[index++]=arr[j++];
            }
        }else{
            while(i<=mid){
                temp[index++]=arr[i++];
            }
        }
    i=beg,j=0;
    while(i<=end){
         arr[i++] = temp[j++];
    }
}
void merge_sort(int *arr,int beg,int end){
    if(beg<end){
        int mid = (beg+end)/2;
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}
#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}