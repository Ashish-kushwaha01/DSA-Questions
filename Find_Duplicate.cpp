/* Find duplicate in an array .*/
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j])
            cout<<arr[i];
        }
    }
    return 0;

}