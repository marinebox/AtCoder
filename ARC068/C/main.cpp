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
    long long x;
    cin >> x;

    long long ans = 0;
    ans = (x / 11);
    x -= ans * 11;
    ans *= 2;
    if(x > 0){
        x -= 6;
        ans++;
        if(x > 0){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
