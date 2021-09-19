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

const string YES = "Yes";
const string NO = "No";

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    rep(i, n){
        int d1, d2;
        cin >> d1 >> d2;
        if(d1 == d2){
            cnt++;
            if(cnt == 3){
                cout << YES << endl;
                return 0;
            }
        }
        else{
            cnt = 0;
        }
    }

    cout << NO << endl;
    return 0;
}
