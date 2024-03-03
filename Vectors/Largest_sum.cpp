/* Find largest sum of my subarray with time complexity O(N) .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int Largest_Sum(vector<int>a){
    int n=a.size();
    int maxi=INT_MIN;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=a[i];
        maxi=max(maxi,prefix);
        if(prefix<0)
        prefix=0;
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter how many no you have : ";
    cin>>n;
    cout<<"\n\n";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\n\n";
    cout<<"Your no. are : ";
 for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";

    cout<<Largest_Sum(arr);
}