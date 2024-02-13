/* Sorting of Array using selection sort .  */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter that how many no. you have ? : ";
    cin>>n;

    cout<<"\n";

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" is : ";
        cin>>arr[i];
    }
    cout<<"\n";


    cout<<"Your no. are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\n";

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
    }

    cout<<"\n";
    cout<<"After sorting my elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
