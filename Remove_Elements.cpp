/* Remove same elements in a sorted array .*/
#include<iostream>
using namespace std;
int main(){
    // int n;
    int arr[6]={1,2 ,3,2,4,5};
    int n=2;
    for(int i=0;i<6;i++){
        if(arr[i]==n){
           arr[i]=arr[i+1];
           i++;
        }
    }
    
   for(int i=0;i<6;i++){
    cout<<arr[i];
   }
}