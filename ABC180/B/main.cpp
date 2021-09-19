#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
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
    long long n;
    cin >> n;
    vector<long long> x(n,0);
    rep(i, n) cin >> x[i];

    long long manhattan = 0;
    double euclid = 0;
    long long chebishef = 0;

    for(auto c : x){
        manhattan += abs(c);
        euclid += pow(c, 2);
        chebishef = max(chebishef, abs(c));
    }
    euclid = sqrt(euclid);

    cout << manhattan << endl;
    cout << fixed << setprecision(15) << euclid << endl;
    cout << chebishef << endl;
    return 0;
}
