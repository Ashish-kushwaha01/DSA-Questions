/* Insert element in the end of a linked list with the help of Recursion .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value ){
        data = value;
        next = NULL;
    }
};

// Using Recursion 

Node *CreateLinkedList(int arr[],int index,int size){
    if(index == size)
    return NULL;

    Node *temp;
    temp = new Node(arr[index]);
     temp->next = CreateLinkedList(arr,index+1,size);
    return temp;



}
int main(){
    int arr[] = {4,5,6,7};
    Node *Head = CreateLinkedList(arr,0,4);

    // for(int i=0;i<4;i++){
    //     if(Head == NULL){
    //         Head = new Node(arr[i]);
    //     }
        // else{
        //     Node *temp;
        //     // temp = new Node(arr[i]);
        // }
    // }

    Node *temp = Head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }



}