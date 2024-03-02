/* Coding for selection sort by using functions  .*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selection_sort(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            index=j;
        }
        if(arr[i]>arr[index]);
        swap(arr[i],arr[index]);
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
selection_sort(arr);

return 0;

}