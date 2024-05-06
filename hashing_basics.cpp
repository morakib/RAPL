#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int b1=1e9+21
const int mxN=3e5;
int pw1[mxN+3];
int pw2[mxN+3];
int binex(int a,int b,int m){
    int ans=1;
    while(b){
        if(b&1) ans=(ans*a)%m;
        b>>=1;
        a=(a*a)%m;
    }
    return ans;
}
void pre(){
    pw1[0]=pw2[0]=1;
    for(int i=1;i<mxN;i++){
        pw1[i]=(pw1[i-1]*b1)%m1;
        pw2[i]=(pw2[i-1]*b2)%m2;
    }
}
int h1[mxN+2];
int h2[mxN+2];
void shash(string &s){
    int n=s.size();
    h1[0]=s[0]*pw1[0]%m1;
    h2[0]=s[0]*pw2[0]%m2;
    for(int i=1;i<=n;i++){
        h1[i]=((h1[i-1]*b1)%m1 + s[i])%m1;
        h2[i]=((h2[i-1]*b2)%m2 + s[i])%m2;
    }
}
int get_hash(int l,int r){
    if(l==0){
        int a=(h1[r]+m1)%m1;
        int b=(h2[r]+m2)%m2;
        return a<<32 | b;
    }
    int 
}
void solve(){
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
