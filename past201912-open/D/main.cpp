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
    vector<int> vec(n, 0);
    rep(i, n){
        int tmp;
        cin >> tmp;
        tmp--;
        vec[tmp]++;
    }

    int bef = 0, aft = 0;
    for(int i = 0; i < n; i++){
        int x = vec[i];
        if(x == 0){
            bef = (i + 1);
        }
        if(x == 2){
            aft = (i + 1);
        }
    }

    if(bef == 0){
        cout << "Correct" << endl;
        return 0;
    }
    else{
        cout << aft << ' ' << bef << endl;
        return 0;
    }
}
