/* Sorting using Insertion sort. */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Insertion_Sort(vector<int>arr){
    int n=arr.size();
    for(int i=1;i<=n-1;i++){     // 5 4 1 8 3 
        // int index=i;
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else break;
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
Insertion_Sort(arr);

return 0;
}