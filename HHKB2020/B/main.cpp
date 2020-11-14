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

int h, w;
int lx, ly; 

bool check(int x, int y, vector<string> &s){
    if(s[y][x] == '#') return false;
    if(x != 0){
        if(s[y][x - 1] == '#') return false;
    }
    if(x != lx){
        if(s[y][x + 1] == '#') return false;
    }
    if(y != 0){
        if(s[y - 1][x] == '#') return false;
    }
    if(y != ly){
        if(s[y + 1][x] == '#') return false;
    }
    return true;
}

int main(){
    cin >> h >> w;
    lx = w - 1;
    ly = h - 1;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    int ans = 0;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            if(check(i, j, s)) ans++;
        }
    }

    coa;
}
