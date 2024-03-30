/* Rotate linked list . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    Node(int value){
        data  = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int index , int size){
    if(index==size)
    return NULL;

    Node* temp;
    temp= new Node(arr[index]);
    temp->next = CreateLinkedList(arr,index+1,size);
    return temp;
}
int main(){
    Node *Head;
    int arr[] = {2,3,4,5,6};
    Head = CreateLinkedList(arr,0,5);

    // printing elements  

    Node *temp= Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    // Rotation code 

    Node *point  = Head;
    Node *curr  = Head;
    Node *prev  = NULL;

    int k;
    cout<<"Enter a no. that how many do you want to rotate : ";
    cin>> k;

    while(k--){
        point = Head;
        while(curr->next){
            prev=curr;
            curr=curr->next;
        }
        prev->next = curr->next;
        Head = curr;
        Head->next = point;
    }
    temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
     
}