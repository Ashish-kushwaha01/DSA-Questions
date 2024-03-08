/* Create first matrix in c++ */
#include<iostream>
// #include<vector>
// #include<algorithm>
// #include<limits.h>
using namespace std;
int main(){
    // int r,c;
    // cout<<"Enter that how many row and column you have : ";
    // cin>>r>>c;
    //  int n,arr[1000],target;
    // cout<<"Enter that how many no. you have : ";
    // cin>>n;
    int r;
    // cout<<"Enter that how many no. you have : ";

    cout<<"Enter that how many row you have : ";
    cin>>r;

    int c;
    cout<<"Enter that how many columns you have : ";
    cin>>c;
    int arr[1000][c];  // Creating matrix ;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter element ["<< i+1<<","<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }

    cout<<"\n\n";
    cout<<"Your matrix is : ";
    cout<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;

}