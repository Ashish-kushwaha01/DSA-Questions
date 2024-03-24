/* Add element in the end of a linked list . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Node{
    public:
    int data ;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){

    int arr[] = {4,5,6,27};
    Node *Head = NULL;
    Node *tail = NULL;

    for(int i=0;i<4;i++){
        if(Head==NULL){
            Head = new Node(arr[i]);
            tail = Head;
        }

        else {
            tail->next = new Node(arr[i]);
            tail= tail->next;
        }
    }

    tail = Head;
    while(tail!=NULL){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
}