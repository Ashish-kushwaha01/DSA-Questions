/* Find square root of my given no. without using built in function . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

    int Square_Root(int n){
        int start=0,end=n-1;
        long mid;
        int  ans=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid*mid==n)
            return mid;
            else if (mid*mid >n)
            end=mid-1;
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }

int main(){

    int n;
    cout<<"Enter your no. : ";
    cin>>n;

    cout<<"Square root of my no. is : ";
    cout<<Square_Root(n);
    return 0;
}