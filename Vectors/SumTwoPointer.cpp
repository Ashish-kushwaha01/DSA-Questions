/* Two pointer problem */
#include<iostream>
#include<vector>
#include<limits.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
   int arr[]={2,3,4,5,6,7,8,9,10};

int target = 13;
// int n=arr.size();


//  Creating a vector , so space complexity is O(n);
//  Time complexity is O(n);


vector<int>a;
int start=0,end=8;
while(start<end){
    if(arr[start]+arr[end]==target)
    {
        a.push_back(start);
        a.push_back(end);
       break;
    }

    else if (arr[start]+arr[end]>target)
    end--;
    else start++;
}
for(int i=0;i<=1;i++){
    cout<<a[i]<<" ";
}

return 0;

}
