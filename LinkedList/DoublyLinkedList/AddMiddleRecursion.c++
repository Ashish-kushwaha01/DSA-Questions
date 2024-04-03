 /* Add element in the given position in the doubly linked list using recursion .*/
 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<limits.h>
 using namespace std;
 class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
 };

 //Code of Recursion 

 Node *CreateDLL(int arr[],int index,int size,Node *back){
    if(index==size)
    return NULL;
    Node* temp = new Node(arr[index]);
    temp->next = back;
    temp->prev = CreateDLL(arr,index+1,size,temp);
    return temp;
 }
 int main(){
    int n;
    cout<<"Enter that how many element in your array : ";
    cin>>n;

    int arr[2000] ;
    for(int i=0;i<n;i++){
        cout<<"Enter element ["<<i+1<<"] :  ";
        cin>>arr[i];
    }
    Node* Head;
    Head = CreateDLL(arr,0,n,NULL);

    int k;
    cout<<"Enter which place do you want to add your element : ";
    cin>>k;

    int p;
    cout<<"Enter your no : ";
    cin>>p;

    
    Node *tail = Head;
    while(tail->prev){
        tail= tail->prev;
    }

    Node *curr = tail;
    Node *pre = NULL;

    while(k--){
        pre = curr;
        curr = curr->next;
    }

    // add element 

    Node *add = new Node(p);
    add->prev = pre;
    add->next = curr;
    pre->next = add;
    curr->prev = add;
    
    Node *temp = tail;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
 }