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
     cout<<"\n";
     

     // Creating second vector 

     int n;
     cout<<"Enter how many do you want to take : " ;
     cin>>n;
     cout<<"\n";
     vector<int>b(n);
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>b[i];
    }

    cout<<"This is your given elements : ";
    for(int i=0;i<n;i++){
        
        cout<<b[i]<<" ";
    }

         cout<<"\n";

         cout<<"After sorting my elements in increasing order : ";
         sort(b.begin(),b.end());
         for(int i=0;i<n;i++){
        
        cout<<b[i]<<" ";
    }
         cout<<"\n";
     cout<<"\n";


cout<<"After sorting my elements in decreasing order : ";
         sort(b.rbegin(),b.rend());
         for(int i=0;i<n;i++){
        
        cout<<b[i]<<" ";
    }



     return 0;
}