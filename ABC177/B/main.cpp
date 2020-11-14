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

    auto sSize = s.size();
    auto tSize = t.size();

    int reqRef = sSize - tSize + 1;

    int ans = 10000;

    for(int i = 0; i < reqRef; i++){
        int tmp = 0;
        for(int j = 0; j < tSize; j++){
            auto sChar = s[i + j];
            auto tChar = t[j];
            if(sChar != tChar) tmp++;
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}
