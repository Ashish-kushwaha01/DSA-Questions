/* Rotate matrix by 90degree in clock wise . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter order of your square  matrix : ";
    cin>>n ;

    

    int arr[300][300];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<"Enter element ["<<i+1<<","<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }

    cout<<"\n\n";
    cout<<"Your matrix is : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<" \n";
    }


    cout<<"After rotation at 90 degree in clock wise : \n";
    for(int j=0;j<n;j++){
        for(int i=n-1;i>=0;i--){
            cout<<arr[i][j]<<" ";

        } 
        cout<<"\n";
    }


    return 0;
}