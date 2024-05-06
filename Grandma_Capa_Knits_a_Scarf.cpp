#include<bits/stdc++.h>
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    string str;
    cin>>str;
    set<char>st;
    for(int i=0;i<n;i++)
    {
        st.insert(str[i]);   
    }
    vector<ll>ans(26,LONG_LONG_MAX);
    for(auto &a:st)
    {
        int low=0;
        int high=n-1;
        ll c=0;
        while(low<high)
        {
            if(str[low]==str[high])
            {
                low++;
                high--;
            }
            else
            {
                if(str[low]==a)
                {
                    low++;
                    c++;
                }
                else if(str[high]==a)
                {
                    high--;
                    c++;
                }
                else
                {
                    c=-1;
                    break;
                }
            }
        }
        if(c!=-1)
        ans[a-'a']=c;
    }
    sort(vr(ans));
    if(ans[0]==LONG_LONG_MAX)cout<<"-1\n";
    else cout<<ans[0]<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}