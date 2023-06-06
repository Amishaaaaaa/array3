//Q4 - ​Given an integer array arr, return the number of consecutive sequences(subarrays) with
//odd sum.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    vector<int> v;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    
    for(int i=0;i<n;i++){
        if(v[i]%2!=0){
            cout<<"[";
            cout<<v[i];
            cout<<"]";
            count++;
            cout<<",";
        }
        
        
    }
    for(int i=0;i<n;i++){
        if(v[i]%2!=0){
            v2.push_back(v[i]);
        }
    }
    if(count!=0){
        cout<<"[";
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<",";
        }
        cout<<"]";
    }
    if(count==0){
        cout<<0;
    }
    return 0;
}