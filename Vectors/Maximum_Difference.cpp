/* Find maximum differnce of my arrays elements .*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={10,4,5,6,110,7,7,8,99};
    int n=9;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini)
        mini=arr[i];
        else if(arr[i]>maxi)
        maxi=arr[i];
    }
   cout<< maxi-mini<<" ";
}