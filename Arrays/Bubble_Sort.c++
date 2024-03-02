/* Sorting of array by using Bubble sort .*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Bubble_sort(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<=n-2;i++){     // 5 4 1 8 3 
        // int index=i;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
       
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
   
    // return []arr;
}

int main(){
    int n;
    cout<<"Enter that how many no. you have : ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter your numbers : ";
    for(int i=0;i<n;i++){
        cout<<"Enter your no. "<<i+1<<" : ";
        cin>>arr[i];
    }

cout<<"\n\n";
    cout<<"Your numbers are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<"\n\n";
cout<<"After swapping your no. are : " ;
Bubble_sort(arr);

return 0;
}