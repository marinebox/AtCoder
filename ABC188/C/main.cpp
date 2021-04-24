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


int main(){
    int n; cin >> n;
    deque<pair<int, int>> players;
    for(int i = 0; i < pow(2, n); i++){
        int rate;
        cin >> rate;
        auto p = make_pair(i + 1, rate);
        players.push_back(p);
    }

    while(players.size() > 2){
        auto p1 = players.front();
        players.pop_front();
        auto p2 = players.front();
        players.pop_front();

        p1.second > p2.second ? players.push_back(p1) : players.push_back(p2);
    }

    auto p1 = players.front();
    players.pop_front();
    auto p2 = players.front();
    players.pop_front();

    auto ans = p1.second < p2.second ? p1.first : p2.first;
    
    cout << ans << endl;
    return 0;
}
