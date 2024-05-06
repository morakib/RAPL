#include<bits/stdc++.h>
using namespace std;
bool prime[1000000];

bool mersene_prime(int n){
    int m=1;
    while(m<n){
        m*=2;
    }
    return (m-1==n) && prime[n];
}

int main(){
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=1000000;p++){
        if(prime[p]){
            for(int i=p*p;i<=1000000;i+=p){
                prime[i]=false;
            }
        }
    }
    int y;
    cin>>y;
    if(prime[y]){
        if(mersene_prime(y)){
            cout<<"Mersene ";
        }
    }
}