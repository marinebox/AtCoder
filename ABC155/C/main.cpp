#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
using namespace std;
using namespace atcoder;
using ll = long long;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;


int main(){
    int n;
    cin >> n;
    map<string, int> vote;
    int maxVote = 0;
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        vote[tmp]++;
        maxVote = max(maxVote, vote[tmp]);
    }

    // int maxVote = 0;
    // for(auto p : vote){
    //     maxVote = max(maxVote, p.second);
    // }
    vector<string> answers;
    for(auto p : vote){
        if(p.second == maxVote){
            answers.emplace_back(p.first);
        }
    }
    // sort(answers.begin(), answers.end());

    for(auto ans : answers){
        cout << ans << endl;
    }
    return 0;
}
