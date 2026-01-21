// Given linked list
// 25 19 14 10 
// Reversed linked list 
// 10 14 19 25
#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}ll;

ll* head = NULL;
ll* createNode(int data){
    ll* nn = (ll*)malloc(sizeof(ll));
    nn->data = data;
    nn->next = NULL;
    return nn;
}
void insert(int data){
    ll* nn = createNode(data);
    if(head==NULL){
        head = nn;
    }else{
        ll* ptr = head;
        while(ptr->next!= NULL){
            ptr=ptr->next;
        }
        ptr->next = nn;
    }
}
void reverse(){
    if(head==NULL || head->next==NULL) printf("\n No Node Exists");
    else{
        ll* pre = NULL;
        ll* next = NULL;
        ll* curr = head;
        while(curr != NULL){
                next = curr->next;
                curr->next = pre;
                pre = curr;
                curr = next;
            }
            head = pre;
    }
}
void display(){
    if(head==NULL){
        printf("\nNo node Exists");
    }else{
        ll* ptr = head;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
int main() {
    int n,i,data;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&data);
        insert(data);
    }
    reverse();
    display();
    return 0;
}