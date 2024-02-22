/* Find cube root using binary search .*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;

    int start =1,end=n,ans;
    long long mid;
    while(start<=end){
        mid = start +(end - start)/2;
        if(mid==n/(mid*mid)){
        cout<<mid;
        
        return 0;
        }
        else if (mid*mid*mid<n)
        {
            ans=mid;
        start=mid+1;
        }
        else{
            end=mid-1;
        }

        
    }
    cout<<ans;
    return 0;
}