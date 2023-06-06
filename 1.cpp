//Q1 - Given an integer array and two integers L and R. Find the sum of elements between the
//index L and index R.
//Note: Both L and R inclusive.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,l,r,sum=0;
    cin>>n>>l>>r;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    for(int i=l;i<=r;i++){
        sum=sum+v[i];
    }
    cout<<sum<<endl;
    return 0;
}