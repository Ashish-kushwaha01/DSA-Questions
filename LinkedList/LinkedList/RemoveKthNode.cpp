/* Remove all kth node of a linked list . */
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
    int arr[] = {1,2,3,4,5,6,7,8,9};
    Head = CreateLinkedList(arr,0,9);

    // printing elements  

    Node *temp= Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    Node *point = Head;

    // code for deleting all kth nodes . 

    cout<<"Enter your Kth node : ";
    int k;
    cin>>k;
    int p=k;

while(k--&& Head->next!=NULL){
    Node *prev =NULL;
    Node *curr =Head;
    if(k==1){
        Head = curr->next;
        prev->next = Head;
        delete curr;
        k=p;

    }


}
    Head = point;

 temp= Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}