#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string c1,c2;
    cin>>c1>>c2;
    for(int i=2;i<n-1;i+=2)
    if(c2[i]=='<'&& (c1[i-1]=='<'||c1[i+1]=='<')){cout<<"NO\n";return;}
    //2nd row has '<' and 1stRow prevCol has '<' and nextCol has '<'
    //we can't go forward
    cout<<"YES\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     int n;
//     cin >> n;
//     vector<char> ok1(n / 2), ok2(n / 2);
//     for (int i = 0; i < 2; ++i) {
//       string s;
//       cin >> s;
//       for (int j = 0; j < n; ++j) if ((i + j) & 1) {
//         ok1[(i + j) / 2] |= (s[j] == '>');
//         ok2[(j - i + 1) / 2] |= (s[j] == '>');
//       }
//     }
//     bool ans = true;
//     for (int i = 0; i < n / 2; ++i) ans &= ok1[i] && ok2[i];
//     cout << (ans ? "YES" : "NO") << '\n';
//   }
// }

////////////////////////                USING BFS
// #include <bits/stdc++.h>
// using namespace std;
// bool bfs_can_reach_destination(int n,string row1,  string row2) {
//     set<pair<int, int>> visited;
//     queue<pair<int, int>> q;
//     q.push({1, 1});  // Start from cell (1,1)
//     while (!q.empty()) {
//         auto [x, y] = q.front();
//         q.pop();
//         if (x == 2 && y == n) {
//             return true;  // Reached the destination
//         }
//         visited.insert({x, y});
//         if (row1[y - 1] == '>') {
//             int next_x = x, next_y = y + 1;
//             if (next_y <= n && !visited.count({next_x, next_y})) {
//                 q.push({next_x, next_y});
//             }
//         }
//         if (row2[y - 1] == '>') {
//             int next_x = x + 1, next_y = y;
//             if (next_x <= 2 && !visited.count({next_x, next_y})) {
//                 q.push({next_x, next_y});
//             }
//         }
//     }
//     return false;  // Destination not reachable
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string row1, row2;
//         cin >> row1 >> row2;
//         cout << (bfs_can_reach_destination(n, row1, row2) ? "YES" : "NO") << '\n';
//     }
//     return 0;
// }


/////////////                             using  DFS

// #include <bits/stdc++.h>
// using namespace std;
// bool dfs_can_reach_destination(int x, int y, int n,string row1,  string row2, set<pair<int, int>>& visited) {
//     if (x == 2 && y == n) {
//         return true;  // Reached the destination
//     }
//     visited.insert({x, y});
//     if (row1[y - 1] == '>') {
//         int next_x = x, next_y = y + 1;
//         if (next_y <= n && !visited.count({next_x, next_y})) {
//             if (dfs_can_reach_destination(next_x, next_y, n, row1, row2, visited)) {
//                 return true;
//             }
//         }
//     }
//     if (row2[y - 1] == '>') {
//         int next_x = x + 1, next_y = y;
//         if (next_x <= 2 && !visited.count({next_x, next_y})) {
//             if (dfs_can_reach_destination(next_x, next_y, n, row1, row2, visited)) {
//                 return true;
//             }
//         }
//     }
//     return false;  // Destination not reachable
// // }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string row1, row2;
//         cin >> row1 >> row2;
//         set<pair<int, int>> visited;
//         cout << (dfs_can_reach_destination(1, 1, n, row1, row2, visited) ? "YES" : "NO") << '\n';
//     }
//     return 0;
// }
