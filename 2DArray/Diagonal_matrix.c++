/* Print matrix element in this way . 
* 1 2 3 
  4 5 6    // element is =  1 2 4 3 5 7 .
  7 8 9 
*/


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

    for(int i=0;i<n;i++)
    {
        int p=0;
        for(int j=i;j>=0;j--){
            cout<<arr[p][j]<<" ";
            p++;
        }
    }
    for(int i=1;i<n;i++){
        int k=i;
        for(int j=n-1;j>=i;j--){
            cout<<arr[k][j]<<" ";
            k++;
        }
    }

    return 0;
}