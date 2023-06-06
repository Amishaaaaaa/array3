//Q3 - ​Given an integer array arr consisting of 0’s and 1’s only, return the max length of
//sequence which contains equal numbers of 0 and 1.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    int czero=0,cone=0,ans;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            czero++;
        }
        else{
            cone++;
        }
        if(czero==cone){
            ans=czero+cone;
        }
    }
    cout<<ans;
    return 0;
}
