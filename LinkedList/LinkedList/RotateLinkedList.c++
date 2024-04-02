/* Write a program to print my linked list after rotation by Kth  times .  */
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
    // int arr[] ={ 4,5,6,9,7,8}; 
    cout<<"Enter how many element in your linked list : ";
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter your array element : ";
    for(int i=0;i<n;i++){
        cout<<"Enter no. ["<<i+1<<"] : ";
        cin>>arr[i];
    }

    Node *Head= CreateLinkedList(arr,0,n);
    

cout<<"Enter how many times do you want to rotate : ";
    int k;
    cin>>k;

    while(k--){

        Node* curr=Head;
    Node* prev =NULL;

        while(curr->next){
            prev=curr;
            curr=curr->next;
        }
        prev->next = curr->next;
        curr->next = Head;
        Head = curr;

    }
    
    Node *temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

   return 0;
    

}