/* Print transpose of a matrix .*/
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
        cout<<"\n";
    }

        cout<<" \n";
        cout<<"Transpose of my matrix is : ";
        cout<<endl;
        for(int i=0;i<column;i++){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<"\n";
        }
    }



        


