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


int main(){
    int h, w;
    cin >> h >> w;

    int all = 0;
    int minimum = 1e9;
    int ans = 0;
    int area = h * w;
    for(int i = 0; i < h * w; i++){
        int tmp;
        cin >> tmp;
        minimum = min(minimum, tmp);
        all += tmp;
    }
    int needBlock = minimum * h * w;
    ans = all - needBlock;

    cout << ans << endl;
    return 0;
}
