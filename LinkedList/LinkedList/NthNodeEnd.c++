/* Write a program to find nth node from end of a linked list . */

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

    Node *temp = Head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    int k;
    cout <<"Enter which node do you want to print from end : ";
    cin>>k;

    int p= count-k;

    temp = Head;
    while(p--){
        temp=temp->next;
    }
    cout<<"Nth node from end of linked list is : ";
    cout<<temp->data;

    return 0;
    
    

   
    

}