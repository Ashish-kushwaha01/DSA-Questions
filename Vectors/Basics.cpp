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

return 0;
}