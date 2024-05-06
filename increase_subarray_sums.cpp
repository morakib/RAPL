#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n,x;
    cin>>n>>x;
    int A[n];
    int mx=0,mxIndex=-1;
    //vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        cin>>A[i];
        //vp.push_back({A[i],i});
        if(A[i]>=mx){
            mx=A[i];
            mxIndex=i;
        }
    }
    vector<int>ans;
    ans.push_back(mx);
    int leftans =mx,rightans=mx;
    vector<int>left,right;

    for(int i=mxIndex-1;i>=0;i--){
        leftans+=A[i];
        left.push_back(leftans);
    }
    for(int i=mxIndex+1;i<=n-1;i++){
        rightans+=A[i];
        right.push_back(rightans);
    }
    cout<<"left :";
    for(auto i:left){
        cout<<i<<' ';
    }
    cout<<"\n";
    cout<<"right :";
    for(auto i:right){
        cout<<i<<' ';
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}