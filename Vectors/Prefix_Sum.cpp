/* Prefix Sum */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // Prefix sum is applicable for both sorted or non sorted array .

    int arr[]={1,2,3,4,5,6,7,4,5};
    vector<int>prefix(9);
    prefix[0]=arr[0];
    for(int i=1;i<9;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }

    for(int i=0;i<9;i++){
        cout<<prefix[i]<<"  ";
    }

    return 0;

}