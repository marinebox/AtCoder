#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
using namespace std;
using namespace atcoder;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

const string SAT = "satisfiable";

int main(){
    int n; cin >> n;
    unordered_map<string, pair<bool, bool>> s;
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        if(tmp.front() != '!'){
            s[tmp].first = true;
        }
        else{
            tmp.erase(tmp.begin());
            s[tmp].second = true;
        }
    }

    string ans = SAT;
    for(auto p : s){
        // cout << "Name: " << p.first << " First: " << p.second.first << " Second: " << p.second.second << endl;
        if(p.second.first && p.second.second){
            ans = p.first;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
