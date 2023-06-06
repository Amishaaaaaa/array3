//Q2 - ​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The
//man starts his trek on point 0 with altitude equal 0. You are given an integer array height
//of length n where height[i] is the net height in altitude between points i​ and i + 1 for all
//(0 <= i < n). Return the highest altitude of a point.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,max=0;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    cout<<max;
    return 0;
}