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

const string YES = "Yes";
const string NO = "No";

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int half = s.size() / 2;

    string ans = YES;
    if(s.size() & 1){
        ans = NO;
        goto end;
    }

    for(int i = 0; i < half; i++){
        if(s[i] != s[half + i]){
            ans = NO;
            goto end;
        }
    }

end:
    cout << ans << endl;
    return 0;
}
