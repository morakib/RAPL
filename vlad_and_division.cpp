#include<bits/stdc++.h>
using namespace std;
#define ll long long 
string intToBinary(ll n) {
    string binary;
    while (n > 0) {
        char bit='0'+(n%2);
        if(bit=='0') binary+='0';
        else         binary+='1';
        n/=2;
    }
    while(binary.size()<31){
        binary+='0';
    }
    return (binary);
}
void solve1() {
    int n; cin >> n;
    map<ll, int> cnt;
    int ans = 0;
    for(int i = 0, x; i < n; ++i) {
        cin >> x;
        if(!cnt[x]) ++ans, ++cnt[(1LL* (1 << 31) - 1) ^ x];
        else --cnt[x];
    }
    cout << ans << "\n";
}
void solve()
{
    ll n;
    cin>>n;
    ll A[n];
    map<string,int>mp;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        A[i]=x;
        mp[intToBinary(x)]++;
    }
    ll ans=n;
    for(int i=0;i<n;i++){
        ll x=A[i];
        string flipbits="";
        string bits    =intToBinary(A[i]);
        if(mp[bits]==0) continue;
        while(x>0){
            char bit='0'+(x%2);
            if(bit=='0') flipbits+="1";
            else         flipbits+="0";
            x/=2;
        }
        while(flipbits.size()<31) flipbits+='1';
        if(mp[flipbits]>0){
            mp[flipbits]--;
            mp[bits]--;
            ans--;
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}