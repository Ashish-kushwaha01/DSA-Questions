/* Find square root of a given no. using binary search . */
#include<iostream>
using namespace std ;
int main(){
   int n;
   cin>>n;

    int start=1;
    int ans =0;
    int end=n;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid==n){
        ans= mid;
        break;}
        else if(mid*mid<n){
            ans=mid;
        start=mid+1;
        
        }
        else
        end=mid-1;
    }
    cout<<"\n"<<ans;
}