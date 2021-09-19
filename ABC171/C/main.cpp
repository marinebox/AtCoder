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
    ll n;
    cin >> n;

    string ans;
    while(n > 0){
        n--;
        int tmp = n % 26;
        // tmp--;
        char ts = 'a' + tmp;
        n /= 26;
        ans.push_back(ts);
    }

    reverse(ans.begin(), ans.end());
    
    cout << ans << endl;
    return 0;
}
