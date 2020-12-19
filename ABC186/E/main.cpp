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

// const ll NOT = -1;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        ll n, s, k;
        cin >> n >> s >> k;

        const ll NMOD = n % k;
        const ll SMOD = s % k;
        ll ans = 0;

        if(NMOD != 0 && SMOD != 0){
            ans = -1;
            cout << ans << endl;
            continue;
        }


        // FIRST LOOP
        ll dist = n - s;
        ll tmp = dist / k;
        ans += tmp;
        ll startPosition = s + tmp * k;
        if(startPosition < n){
            startPosition += k;
            ans++;
        }

        // MORE LOOP
        startPosition %= n;
        ll needMoveToOneLoop = n / k;
        while(startPosition != 0){
            ans += needMoveToOneLoop;
            if(startPosition < NMOD){
                ans++;
            }
            startPosition -= NMOD;
            if(startPosition < 0) startPosition += k;
        }

        cout << ans << endl;
    }

    return 0;
}
