/* Search element in 2D array .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int Search(int n,int arr[][1000], int target){
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]== target)
            return 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter that how many no. you have ? : ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter element ["<<i+1<<","<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }

    cout<<"\n\n";

    cout<<"Your elements are : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }


    int target ;
    cout<<"Enter your target : ";
    cin>>target;

    cout<<Search(n,arr,target);

    return 0;

}