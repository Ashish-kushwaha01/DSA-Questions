/* Sorting of vectors */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int>arr;
    arr.push_back(34);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(134);
    arr.push_back(334);
    arr.push_back(304);


    // sorting in increasing order 
     
     sort (arr.begin(),arr.end());
     for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";

cout<<"\n\n";
     // sorting in decending order 
     
     sort (arr.rbegin(),arr.rend());
     for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
     
    

     return 0;
}