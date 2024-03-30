/* Delete Middle element in the linked list . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node *CreateLinkedList(int arr[],int index,int size){
    if(index == size)
    return NULL;
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr,index+1,size);
    return temp;

}
int main(){
    int arr[] ={ 4,5,6,7,8};

    Node *Head= CreateLinkedList(arr,0,5);
    Node *curr = Head;
    Node *prev =NULL;
    int k;
    cout<<"Enter which element do you want to delete ? : ";
    cin>>k;

    if(Head !=NULL){
        if(k==1){
            Node *tail = Head;
            Head = Head->next;
            delete tail;
        }
else {
    
    
    k--;
    while(k){
        prev = curr;
        curr = curr->next;
        k--;
    }
    
    prev->next = curr->next;
     delete curr;
}
 
    }
    


    Node *temp = Head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}