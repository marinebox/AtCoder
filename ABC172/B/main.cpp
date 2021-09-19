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
    string s, t;
    cin >> s >> t;

    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        auto c = s[i];
        if(c != t[i]) ans++;
    }

    cout <<ans << endl;
    return 0;
}
