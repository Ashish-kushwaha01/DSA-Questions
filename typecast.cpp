// program of Typecasting

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){

    string s = "ASHISH";
    int n = s.size();
    for(int i=0;i<n;i++){
        int p = int(s[i]);
        cout<<p<<" ";
    }
    return 0;
}