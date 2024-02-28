/* Find two no. whose difference is equal to my target by using two pointer .*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   int arr[]={2,3,4,5,6,7,8,9,10};

int target = 8;
// int n=arr.size();


//  Creating a vector , so space complexity is O(n);
//  Time complexity is O(n);


vector<int>a;
int start=0,end=1;
while(start<end){
    if(arr[end]-arr[start]==target)
    {
        a.push_back(start);
        a.push_back(end);
       break;
    }

    else if (arr[end]-arr[start]>target)
    start++;
    else end++;
}
for(int i=0;i<=1;i++){
    cout<<a[i]<<" ";
}

return 0;

}