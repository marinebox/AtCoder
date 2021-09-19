#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

int main(){
    int h, w, m;
    cin >> h >> w >> m;
    
}

// int main(){
//     int h, w, m;
//     cin >> h >> w >> m;
//     vector<vector<bool>> target(h, vector<bool>(w, false));
//     rep(i, m){
//         int th, tw;
//         cin >> th >> tw;
//         th--;
//         tw--;
//         target[th][tw] = true;
//     }

//     // for(auto row:target){
//     //     for(auto element : row){
//     //         cout << element;
//     //     }
//     //     cout << endl;
//     // }

//     vector<pair<ll, int>> rowInfo(h), columnInfo(w);
//     rep(i, h){
//         ll tmp = accumulate(target[i].begin(), target[i].end(), 0);
//         rowInfo[i] = make_pair(-tmp, i);
//     }
//     rep(i, w){
//         ll tmp = 0;
//         rep(j, h){
//             tmp += target[j][i];
//         }
//         columnInfo[i] = make_pair(-tmp, i);
//     }

//     sort(rowInfo.begin(), rowInfo.end());
//     sort(columnInfo.begin(), columnInfo.end());

//     ll ans = 0;
//     // int row = 0;
//     // ll rowNum = -rowInfo[row].first;
//     // int i = rowInfo[row].second;
//     // int column = 0;
//     // ll columnNum = -columnInfo[column].first;
//     // int j = columnInfo[column].second;
//     // ll tmp = rowNum + columnNum;
//     // if(target[i][j] == 1){
//     //     tmp--;
//     // }
//     // ans = max(ans, tmp);
//     ll colMax = -columnInfo[0].first;
//     for(int row = 0; row < h; row++){
//         bool flag = false;
//         ll previous = 0;
//         ll tgt = -rowInfo[row].first;
//         int i = rowInfo[row].second;
//         if(ans - colMax > tgt) break;
//         for(int column = 0; column < w; column++){
//             ll num = -columnInfo[column].first;
//             if(flag && previous != num) break;
//             int j = columnInfo[column].second;
//             ll tmp = tgt + num;
//             if(target[i][j] == true){
//                 tmp--;
//             }
//             ans = max(ans, tmp);
//             if(tmp < ans) flag = true;
//             previous = num;
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }
