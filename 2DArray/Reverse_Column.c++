/* Print your matrix in which column is in reverse order .*/
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

    cout<<"Reverse of my column in my matrix is : ";
    cout<<"\n";
    for(int i=row-1;i>=0;i--){
        for(int j=0;j<column;j++)
        cout<<arr[i][j]<<" ";
        cout<<"\n";
    }

    return 0;
}