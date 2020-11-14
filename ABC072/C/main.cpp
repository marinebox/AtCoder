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
    int n;
    cin >> n;
    vint num(1e5 + 5, 0);
    int ma = 0;
    rep(i, n){
        int tmp;
        cin >> tmp;
        num[tmp]++;
        ma = max(ma, tmp);
    }

    //連続する3項の和を取り最大値を取る
    int ans = 0;
    for(int i = 0; i <= ma; i++){
        int tmp = 0;
        tmp = accumulate(num.begin() + i, num.begin() + i + 3, 0);
        ans = max(ans, tmp);
        // cout << tmp << endl;
    }

    cout << ans << endl;
    return 0;
}
