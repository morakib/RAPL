#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	string a[2];
    	cin >> a[0] >> a[1];
    	int max_down = n-1, min_down = 0;
    	for(int i=n-1; i>=1; i--){
    		if(a[0][i] == '1' && a[1][i-1] == '0'){
				max_down = i-1;
		}
	}
		for(int i=0; i<max_down; i++){
    		if(a[0][i+1] == '0' && a[1][i] == '1'){
    			min_down=i+1;
			}
		}
		for(int i=0; i<=max_down; i++){
			cout << a[0][i];
		}
		for(int i=max_down; i<=n-1; i++){
			cout << a[1][i];
		}
		cout <<  endl;
			cout << max_down - min_down+1  << endl;
	}

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
//     cin >> t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		string a,b;
// 		cin>>a>>b;
// 		int i=1;
// 		while(i<n&&a[i]<=b[i-1])i++;
//         //i->1--n porjonto gese jotkhn na prothom 
//         //row te 1 ashe and 2nd tay zero ashe
// 		int j=i-1;
//         //i jehetu 1 beshi hoye check krse tai 1 minus
// 		while(j>0&&a[j]==b[j-1])j--;
//         //jotkhn equal pabo je j-> (i-1)-1 prjntw komabo
// 		for (int k=0;k<i;k++)cout<<a[k];
// 		for (int k=i-1;k<n;k++)cout<<b[k];
// 		cout<<endl<<i-j<<endl;
// 	}
// 	return 0;
// }