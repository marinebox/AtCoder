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
    vvint hap(n, vint(n,0));
    rep(i, n){
        for(int j = i + 1; j < n; j++){
            cin >> hap[i][j];
        }
    }

    vint team(n, 0);
    for(int i = 0; i < pow(3, n); i++){
        int tmp = i;
        while(tmp){
            
        }
    }
}
