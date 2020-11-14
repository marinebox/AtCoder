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

const string WA = "WA";
const string AC = "AC";

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, string>> submits(m);
    rep(i, m){
        int p;
        string s;
        cin >> p >> s;
        submits[i] = make_pair(p, s);
    }

    vector<pair<bool, int>> scores(1e5 + 5, pair<bool, int>(false, 0));
    for(auto x : submits){
        int num = x.first;
        string aw = x.second;
        if(!scores[num].first){
            if(aw == AC){
                scores[num].first = true;
            }
            else{
                scores[num].second++;
            }
        }
    }

    ll ans = 0;
    ll pen = 0;

    for(auto x : scores){
        if(x.first){
            ans++;
            pen += x.second;
        }
    }

    cout << ans << " " << pen << endl;
    return 0;
}
