/* Print matrix in spiral order .*/
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
    int top=0,bottom=row-1,left=0,right=column-1;
    while(top<=bottom ){
        for(int i=top;i<=right;i++)
        cout<<arr[top][i]<<" ";
    
    top++;
    for(int j=top;j<=bottom;j++)
    cout<<arr[j][right]<<" ";

    right--;
    for(int k=right;k>=left;k--)
    cout<<arr[bottom][k]<<" ";

    bottom--;
    for(int l=bottom;l>=top;l--)
    cout<<arr[l][left]<<" ";
    left++;



    }
   return 0;
}