/* Rotate array by k times .*/
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"\n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int k;
    cout<<"How many times do you want to rotate ? : ";
    cin>>k;
    for(int j=0;j<k;j++) {
    int temp=arr[4];
    // for(int i=1;i<10;i++){
    //     arr[i+1] = arr[i]    ;  //  1  2  3  4  5  // 51234   45123   34512   23451       
       
    // }
    for(int i=4;i>0;i--){
        
       arr[i]=arr[i-1];           // 3 2 1 
       
    }
    arr[0]=temp;
}
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}