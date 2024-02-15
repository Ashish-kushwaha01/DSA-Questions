/* Sorting of Array using selection sort .  */
#include<iostream>
using namespace std;
// int Min(int arr[],int n){
//     int min=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<min)
//         min=arr[i];
        
//     }
//     return min;

// }
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
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    for(int i=0;i<n;i++){
        // int min=arr[i];
        int min=arr[i];
        int index=i;
        //5 4 3 2 1
        //    int min= Min(arr[n],n);
            for(int j=i+1;j<n;j++){
                if(arr[j]<min)
                index=j;
                min=arr[index];

            // 5 4 3 2 1 
            
        }
        if(arr[i]>min){
       int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
    }
    }
    cout<<"\n";
    cout<<"After sorting my elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
