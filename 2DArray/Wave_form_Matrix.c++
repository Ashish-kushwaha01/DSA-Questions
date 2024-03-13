/* Print matrix elements in wave form .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,9,8,7,6};

    cout<<"Your matrix is : \n";
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<" \n";
    }
    for(int j=0;j<3;j++){
        if(j%2==0){
            for(int i=0;i<4;i++) 
            cout<<arr[i][j]<<" ";
        }
        else {
            for(int i=3;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}