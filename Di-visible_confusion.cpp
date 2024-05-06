#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        bool flag=false;
        for(int i=1;i<=n;i++){
            bool divByAll=false;
            for(int j=i+1;j>=2;j--){
                if(a[i]%j!=0){
                    divByAll=true;
                    break;
                }
            }
            if(!divByAll) {flag=true;break;}
            
        }
        if(!flag) cout<<"YES\n";
        else     cout<<"NO\n";
        
    }
}
