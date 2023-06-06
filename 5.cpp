//Q5 - Given an integer array arr, return an array ans such that ans[i] is equal to the product of
//all the elements of arr except arr[i].

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,val=1;
    cin>>n;
    vector<int> v;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                val=val*v[j];
            }
        }
        ans.push_back(val);
        val=1;
    }
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<",";
    }
    cout<<"]";
    return 0;
}