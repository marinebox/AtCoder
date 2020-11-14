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

const string YES = "Yes";
const string NO = "No";

int main(){
    int n;
    cin >> n;
    vvint s(n, vint(3));
    rep(i, n){
        rep(j, 3){
            cin >> s[i][j];
        }
    }

    vint now = {0, 0, 0};
    for(int i = 0; i < n; i++){
        int time = s[i][0] - now[0];
        int dist = abs(s[i][1] - now[1]) + abs(s[i][2] - now[2]);
        if(dist > time){
            cout << NO << endl;
            return 0;
        }
        int diff = dist - time;
        if(diff % 2 != 0){
            cout << NO << endl;
            return 0;
        }
    }

    cout << YES << endl;
    return 0;
}

