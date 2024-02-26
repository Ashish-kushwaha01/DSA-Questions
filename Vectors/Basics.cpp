/* Introduction to vectors .*/
#include<iostream>
#include<vector>  // for taking vectors 
using namespace std;
int main(){
// take input in vectors 

// first method 

vector<int>a;
a.push_back(2);
a.push_back(3);
a.push_back(4);
a.push_back(5);
a.push_back(6);
a.push_back(7);
a.push_back(8);
a.push_back(9);
a.push_back(12);
a.push_back(32);

for(int i=0;i<10;i++){
    cout<<a[i]<<" ";
}

/* 
    second method 
*/

int n;
cout<<"Enter how many no. you want to take with user : ";
cin>>n;
vector<int>b(n);


for(int i=0;i<n;i++){
    cout<<"Enter no. "<< i+1<< " : ";
    cin>>b[i];
}

cout<<"Your no. are : \n";
for(int i=0;i<n;i++){
    cout<<b[i]<< " ";
}

cout<<"Size of first vector : "<<a.size()<<" \n";
cout<<"Size of second vector : "<<b.size()<<" \n";

cout<<"Capacity of first vector : "<<a.capacity()<<" \n";
cout<<"Capacity of second vector : "<<b.capacity()<<" \n";
b.push_back(5);
cout<<"Capacity of second vector : "<<b.capacity()<<" \n";
return 0;
}