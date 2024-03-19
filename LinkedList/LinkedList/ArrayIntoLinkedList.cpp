/* Change Array element into linked list .*/
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
        data = value;
        next=NULL;
    }
};
int main(){
    int arr[] = {3,4,5,6,7};
        Node *Head;
        Head=NULL;

    for(int i=0;i<5;i++){
        // Linked list does not exist . 
        if(Head == NULL){
            Head = new Node(arr[i]);
        }
        else {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next=Head;
            Head=temp;

            
        }
       

    } 
      //  Add extra element 
      
     Node *Add;
            Add = new Node(56);
            Add->next=Head;
            Head=Add;

    // Print elements .

    Node *temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}