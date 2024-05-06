#include<bits/stdc++.h>
using namespace std;
string decimalToBase9(long long  N) {
    string base9 = "";
    while (N > 0) {
        int digit = N % 9;
        base9 = char(digit + '0') + base9; // Convert digit to character and prepend to base9
        N /= 9;
    }
    return base9;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string deb=decimalToBase9(n);
        string fin;
        for(auto x:deb){
            if(x>'3'){
                int k=x-'0';
                cout<<k+1;
            }else{
                cout<<x-'0';
            }
        }
        cout<<"\n";
    }
}