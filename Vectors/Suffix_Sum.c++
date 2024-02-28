/* Suffix sum */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // Suffix sum is applicable for both sorted or non sorted array .

    int arr[]={1,2,3,4,5,6,7,4,5};
    vector<int>suffix(9);
    suffix[8]=arr[8];
    for(int i=7;i>=0;i--){
        suffix[i]=suffix[i+1]+arr[i];
    }

    for(int i=0;i<9;i++){
        cout<<suffix[i]<<"  ";
    }

    return 0;

