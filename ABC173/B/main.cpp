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
    // vector<string> s(n);
    map<string, int> s;
    rep(i, n){
        string tmp;
        cin >> tmp;
        s[tmp]++;
    }

    cout << "AC x " << s["AC"] << endl;
    cout << "WA x " << s["WA"] << endl;
    cout << "TLE x " << s["TLE"] << endl;
    cout << "RE x " << s["RE"] << endl;
    return 0;
}
