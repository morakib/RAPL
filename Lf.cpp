#include<bits/stdc++.h>
using namespace std;

int Gcd(int a,int b,int &x,int &y){
    if(a==0){
        x=0;
        y=1;
        return b;
    }
    int x1,y1;
    int gcd=Gcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return gcd;
}

int main(){
    int a,b;
    cin>>a>>b;
    int x,y;
    cout<<(a*b)/Gcd(a,b,x,y)<<"\n";
}