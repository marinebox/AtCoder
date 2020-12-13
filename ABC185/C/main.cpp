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
    int wholeSize; cin >> wholeSize;

    // vector<vector<ll>> answers(210, vector<ll>(15, 0));
    // answers[wholeSize][cutNumber]
    
    vector<vector<ll>> answers(15, vector<ll>(210, 0));
    // answer[cutNum][wholeSize]

    for(int cutNum = 1; cutNum <= 12; cutNum++){
        if(cutNum == 1){
            for(auto &x : answers[1]){
                x = 1;
            }
            answers[1][0] = 0;
        }
        else{
            for(int whole = 1; whole <= 205; whole++){
                // answers[cutNum][whole] = 
                    // accumulate(answers[cutNum - 1].begin(), answers[cutNum].begin() + (whole - 1), 0LL);
                answers[cutNum][whole] = answers[cutNum][whole - 1] + answers[cutNum - 1][whole - 1];
            }
        }
    }

    cout << answers[12][wholeSize] << endl;
    return 0;
}