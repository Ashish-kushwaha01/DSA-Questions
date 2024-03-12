/* Find and print the smallest element in the 2D array .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter that how many row in your matrix : ";
    cin>>row ;

    cout<<"Enter that how many column in your matrix : ";
    cin>>column;

    int arr[300][300];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        cout<<"Enter element ["<<i+1<<","<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }

    cout<<"\n\n";
    cout<<"Your matrix is : \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<" \n";
    }


    int small=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
           if(arr[i][j]<small)
           small =arr[i][j];
        }
        cout<<" \n";
    }

    cout<<"Your smallest element is : ";
    cout<<small;

    return 0;
    
}