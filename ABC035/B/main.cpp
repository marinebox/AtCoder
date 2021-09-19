#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl
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
    string s;
    int t;
    cin >> s >> t;

    int x = 0, y = 0;
    vector<int> op(5, 0);
    // L R U D ?;

    for(auto c = s.begin(); c != s.end(); c++){
        if(*c == 'L') op[0]++;
        if(*c == 'R') op[1]++;
        if(*c == 'U') op[2]++;
        if(*c == 'D') op[3]++;
        if(*c == '?') op[4]++;
    }

    x = 0 - op[0] + op[1];
    y = op[2] - op[3];
    int manhattan = abs(x) + abs(y);
    int ans = 0;
    if(t == 1) ans = manhattan + op[4];
    if(t == 2){
        int q = op[4];
        if(q <= manhattan) ans = manhattan - q;
        else{
            q -= manhattan;
            manhattan = 0;
            if(q % 2 == 0) ans = 0;
            else{
                ans = 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
