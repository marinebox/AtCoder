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
    int n;
    cin >> n;
    vector<char> c(n);
    // map<char, int> color;
    vector<int> w, r;
    // color['R'] = 0;
    // color['W'] = 0;
    rep(i, n){
        char tmp;
        cin >> tmp;
        c[i] = tmp;
        // color[tmp]++;
        if(tmp == 'R'){
            r.push_back(i);
        }
        else{
            w.push_back(i);
        }
    }
    // if(color['R'] == 0|| color['W'] == 0){
    //     cout << 0 << endl;
    //     return 0;
    // }
    if(r.empty() || w.empty()){
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    while(1){
        if(w.empty() || r.empty()) break;
        int wnum = w.front();
        int rnum = r.back();
        if(wnum > rnum) break;
        ans++;
        w.erase(w.begin());
        r.erase(r.begin() + r.size() - 1);
    }

    cout << ans << endl;
    return 0;


}

// bool setcheck(string &c){
//     auto previous = c.front();
//     for(int i = 1; i < c.size(); i++){
//         auto now = c[i];
//         if(previous != now){
//             return false;
//         }
//         previous = now;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin >> n;
//     string c;
//     cin >> c;

//     if(setcheck(c)){
//         cout << 0 << endl;
//         return 0;
//     }

//     int ans = 0;
//     while(1){
// link1:
//         bool flag = false;
//         for(int i = 0; i < c.size(); i++){
//             if(c[i] == 'W'){
//                 for(int j = c.size() - 1; j >= 0; j--){
//                     if(j < i){
//                         flag = true;
//                         break;
//                     }
//                     if(c[j] == 'R'){
//                         c[j] = 'W';
//                         c[i] = 'R';
//                         ans++;
//                         goto link1;
//                     }
//                 }
//             }
//             if(flag) break;
//         }
//         if(flag) break;
//     }

//     cout << ans << endl;
//     return 0;
// }