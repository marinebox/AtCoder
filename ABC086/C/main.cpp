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

struct position{
    int x, y;
};

int main(){
    int n;
    cin >> n;

    position present = {0, 0};
    int time = 0;
    string ans = YES;
    for(int i = 0; i < n; i++){
        int t;
        position next;
        cin >> t >> next.x >> next.y;

        int manhattan = abs(next.y - present.y) + abs(next.x - present.x);
        int remainTime = t - time;
        // cout << "remain: " << remainTime << endl;
        // cout << "manhattan: " << manhattan << endl;
        if((remainTime - manhattan) % 2 == 0 && remainTime - manhattan >= 0){
            present = next;
            time = t;
            // cout << i << " is done" << endl;
        }
        else{
            ans = NO;
            break;
        }
        // cout << "time: " << time << endl;
    }

    cout << ans << endl;
    return 0;
}

