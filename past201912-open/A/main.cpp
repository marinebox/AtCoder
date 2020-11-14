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

bool isNum(char c){
    if(c >= '0' and c <= '9'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s;
    cin >> s;

    int ans = 0;
    int digit = 100;
    for(int i = 0; i < 3; i++){
        char c = s[i];
        if(!isNum(c)){
            cout << "error" << endl;
            return 0;
        }
        int j = (c - '0');
        ans += digit * j;
        digit /= 10;
    }

    ans *= 2;
    cout << ans << endl;
    return 0; 
}
