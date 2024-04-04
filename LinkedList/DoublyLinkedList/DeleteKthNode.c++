/* Delete Kth node of a doubly linked list . */
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
    temp->prev = back;
    temp->next = CreateDLL(arr,index+1,size,temp);
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

     // code for deleting element 

cout<<"Which node do you want to delete ? : ";
int k;
cin>>k;

if(Head->next==NULL)

Node *tail = Head;    9
while(--k){
    tail = tail->next;
}

tail->prev->next = tail->next;
tail->next->prev = tail->prev;
delete tail;
    

    Node *temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
 }