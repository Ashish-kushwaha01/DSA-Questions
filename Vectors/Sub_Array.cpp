/* Find all Subarray .*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4};

// print all subarray with size 1;

    for(int i=0;i<4;i++){
        cout<<arr[i]<<"   ";
    }

// print all subarray with size 2;

cout<< " \n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" "<<arr[i+1]<< "   ";
    }
    
// print all subarray with size 3;

    cout<< " \n";
    for(int i=0;i<2;i++){                                                      // 1 2 3 4 
        cout<<arr[i]<<" "<<arr[i+1]<< " "<<arr[i+2]<<"   ";
    }

// print all subarray with size 4;

    cout<< " \n";
    for(int i=0;i<1;i++){                                                      // 1 2 3 4 
        cout<<arr[i]<<" "<<arr[i+1]<< " "<<arr[i+2]<<" "<<arr[i+3];
    }

    return 0;
}