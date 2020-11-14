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

    int yesterday, today;
    cin >> yesterday;
    for(int i = 1; i < n; i++){
        cin >> today;
        int delta;
        if(today > yesterday){
            delta = today - yesterday;
            cout << "up" << ' ' << delta << endl;
        }
        else if(today == yesterday){
            cout << "stay" << endl;
        }
        else{
            delta = yesterday - today;
            cout << "down" << ' ' << delta << endl;
        }
        yesterday = today;
    }

    return 0;
}
