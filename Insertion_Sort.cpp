/* Insertion Sort */
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"How many no. you have ? : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        for(int j =i;j>0;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else 
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
