/* Apply kadane's algorithm  and find the largest sum of my subarray . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int largest_sum(vector<int>a){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<a.size();i++){
       sum+=a[i];
        maxi=max(maxi,sum);
        if(sum<0)
        sum=0;
        
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter that how many no. you have : ";
    cin>>n;
    cout<<" \n\n";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"Your no. are : ";
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }

    cout<<" \n\n";

    cout<<"Largest sum of my subarray is : ";
    cout<<largest_sum(arr);

    return 0;

}