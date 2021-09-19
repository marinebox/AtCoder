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
    int ans;
    for(int i = 0; i < 5; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 0){
            ans = i;
            ans++;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
