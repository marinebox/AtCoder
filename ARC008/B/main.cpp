#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
using namespace std;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;


int main(){
    int n, m;
    cin >> n >> m;
    string name, kit;
    cin >> name >> kit;

    map<char, int> nameMap, kitMap;
    for(auto c : name) nameMap[c]++;
    for(auto c : kit) kitMap[c]++;

    int ans = 0;
    for(auto c : nameMap){
        if(kitMap[c.first] == 0){
            ans = -1;
            break;
        }
        int tmp = c.second / kitMap[c.first];
        if(c.second % kitMap[c.first] != 0) tmp++;
        ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}
