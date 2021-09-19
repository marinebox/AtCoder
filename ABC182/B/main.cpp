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
    int n;
    cin >> n;
    vec<int> a(n);
    for(auto &i : a) cin >> i;
    
    int ans = 0;
    int tmp = 0;
    int previous = 0;
    for(int i = 2; i <= 1000; i++){
        previous = max(previous, tmp);
        tmp = 0;
        for(auto x : a){
            if(x % i == 0){
                tmp++;
            }
        }
        if(tmp > previous) ans = i;
    }

    cout << ans << endl;
    return 0;
}
