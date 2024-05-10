/* First program of Queue .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Queue{
    int *arr;
    int first,rear,size;
    public:
    Queue(int n){
        arr = new int[n];
        first=rear = -1;
        size = n;
    }
    // method to check that my stack is empty or not.
    bool isEmpty(){
        if (first == -1 && rear == -1)
        return true;
        else return false;
    }

    // method to check that my stack is full or not.

    bool isFull(){
        if(rear==size-1)
        return true;
        else return false ;
    }

    // creating a method to push element in the stack .
    void push(int x){
        
        // first of all check that my queue is empty or not .
        if(isEmpty()){
            first = rear = 0;
            arr[0] = x;
        }
        //check that queue is full or not .
        else if(isFull()){
            cout<<"Your queue is full .";
            return ;
        }
        // fill element in the queue .
        else {
            rear = (rear+1)%size;
            arr[rear] = x;
        }

    }
    
    // create a method to pop up queue element .
void pop(){
    // check that queue is empty or not .

    if(isEmpty()){
        cout<<"Your stack is underflow .";
    }
     // check that stack is full or not .
    else {
        if(first == rear){
            first =-1;
            rear = -1;
        }
        else {
            first = (first+1)%size;
        }
    }

}

};
int main(){

    Queue q(5) ;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);

}