#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>pos,neg;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(x>0){
                pos.push_back(x);
            }else{
                neg.push_back(-x);
            }
        }
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        long long posans=0,negans=0;
        if(pos[pos.size()-1] > neg[neg.size()-1]){
            for(int i=neg.size()-1;i>=0;i-=k){
                negans+=neg[i];
            }
            posans+=pos[pos.size()-1];
            for(int i=pos.size()-k-1;i>=0;i-=k){
                posans+=pos[i];
            }
            cout<<posans+negans<<"\n";
        }else{
            for(int i=pos.size()-1;i>=0;i-=k){
                posans+=pos[i];
            }
            negans+=neg[neg.size()-1];
            for(int i=neg.size()-k-1;i>=0;i-=k){
                negans+=neg[i];
            }
            cout<<posans+negans<<"\n";
        }
        cout<<"\n";

    }
}
