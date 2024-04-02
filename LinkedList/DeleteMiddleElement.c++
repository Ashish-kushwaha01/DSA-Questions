/* Delete middle element of my linked list . */
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
    int c=0;
    while(temp){
        c++;
        temp=temp->next;
    }

    if(c==1){
        Head=NULL;
    }
    else {
        Node* prev = NULL;
        temp=Head;
        c= c/2 ;
        while(c--){
            prev = temp;
            temp=temp->next;
        }
        prev->next =  temp->next;
        delete temp;
    }

    temp = Head;
    cout<<"After deleting middle element my linked list is : ";
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
    
    

   
    

}