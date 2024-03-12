/* Sum of diagonal element .*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

void Diagonal_Sum(int n,int arr[][34]){
    int first=0,second=0;
    for(int i=0;i<n;i++){
        first+=arr[i][i];
    }
    int i =0,j=n-1;
    while(j>=0){
        second+=arr[i][j];
        i++;
        j--;
    }

    cout<<"First sum is : "<<first << " and second sum is   : "<<second;

}
int main(){
    int n;
    cout<<"Enter order of your square matrix : ";
    cin>>n;

    int arr[34][34];
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

Diagonal_Sum(n,arr);

}
