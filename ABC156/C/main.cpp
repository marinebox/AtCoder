#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl;
#define cinvec(vec) for(auto &i : vec) cin >> i
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
    vector<int> x(n);
    cinvec(x);
    
    int ans = 1e9;
    for(int i = 1; i <= 100; i++){
        int tmp = 0;
        for(auto j : x){
            tmp += pow(i - j, 2);
        }
        ans = min(ans, tmp);
    }

    coa;
    return 0;
}
