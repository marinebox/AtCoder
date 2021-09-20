#include <bits/stdc++.h>
// #include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
#define deg_to_rad(deg) ((deg) / 360) * 2 * M_PI
#define rad_to_deg(rad) ((rad) / 2 / M_PI) * 360
using namespace std;
// using namespace atcoder;
using ll = __int64_t;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;
using dint  = deque<int>;
using Graph = vector<vector<int>>;


int main(){
    int q; cin >> q;
    queue<int> q1;
    priority_queue<int, vector<int>, greater<int>> q2;
    for(int i = 0; i < q; i++){
        int a; cin >> a;
        if(a == 1){
            int b; cin >> b;
            q1.push(b);
        }
        if(a == 2){
            if(q2.empty()){
                cout << q1.front() << endl;
                q1.pop();
            }
            else{
                cout << q2.top() << endl;
                q2.pop();
            }
        }
        if(a == 3){
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
        }
    }
    return 0;
}
