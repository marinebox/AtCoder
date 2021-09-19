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
    ll n, m, k;
    cin >> n >> m >> k;
    // queue<long long> a, b;
    // rep(i, n){
    //     ll tmp;
    //     cin >> tmp;
    //     a.push(tmp);
    // }
    // rep(i, m){
    //     ll tmp;
    //     cin >> tmp;
    //     b.push(tmp);
    // }
    vll a(n), b(m);
    rep(i, n){
        cin >> a[i];
    }
    rep(i, m){
        cin >> b[i];
    }

    ll now = 0;
    ll ans = 0;
    // ll numa = 0;
    // ll numb = 0;
    while(1){
        ll ta, tb;
        if(!a.empty()){
            ta = a.front();
        }
        else{
            ta = 1e9 + 5;
        }
        if(!b.empty()){
            tb = b.front();
        }
        else{
            tb = 1e9 + 5;
        }

        ll mi = min(ta, tb);
        if(now + mi > k) break;
        if(ta < tb){
            ans++;
            now += ta;
            // a.pop();
            a.erase(a.begin());
        }
        else if(ta > tb){
            ans++;
            now += tb;
            // b.pop();
            b.erase(b.begin());
        }
        if(ta == tb){
            ll cnt = 1;
            ll tpa, tpb;
            while(ta == tb){
                tpa = a[cnt];
                tpb = b[cnt];
                cnt++;
            }
            if(tpa < tpb){
                ans++;
                now += ta;
                a.erase(a.begin());
            }
            else{
                ans++;
                now += tb;
                b.erase(b.begin());
            }
        }
    }
    cout << ans << endl;
    return 0;
}
