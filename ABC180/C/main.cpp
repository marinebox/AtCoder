#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
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
    long long n;
    cin >> n;

    long long limit = sqrt(n) + 1;
    vector<long long> answers;

    for(long long i = 1; i < limit; i++){
        if(n % i == 0){
            long long remain = n / i;
            answers.emplace_back(i);
            if(i != remain) answers.emplace_back(remain);
        }
    }

    sort(answers.begin(), answers.end());

    for(auto ans : answers) cout << ans << endl;

    return 0;
}
