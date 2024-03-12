/* Reverse row of each matrix .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
void Reverse(int arr[][4],int row , int col){
    for(int i=0;i<row;i++){
   
    for(int j=col-1;j>=0;j--){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
        }
}
int main(){
    int arr[3][4];
    cout<<"Enter elements of your matrix : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<"Enter element ["<<i+1<<","<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }
    cout<<"\n";

    cout<<"Your matrix is : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n";

    Reverse(arr,3,4);
}