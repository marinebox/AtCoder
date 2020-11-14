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

long long myGCD(long long a, long long b){
    return b ? myGCD(b, a % b) : a;
}
long long myLCM(long long a, long long b){
    return a * b / myGCD(a, b);
}

int main(){
    ll k;
    cin >> k;

    if (k % 2 == 0 || k % 5 == 0){
        cout << -1 << endl;
        return 0;
    }

    auto n = k;
    bool tp = false;
    long long fl = 0;
    while(n){
        int tmp = n % 1000;
        if(tp){
            fl -= tmp;
        }
        else{
            fl += tmp;
        }
        tp = !tp;
        n /= 1000;
    }
    fl = abs(fl);
    ll g = myLCM(fl, 7);
    ll times = g / fl;
    ll base = k * times;
    ll tmp = base % 10;
    g = myLCM(tmp, 7);
    times = g / tmp;
    base = base * tmp;

    cout << base << endl;
    return 0;


    // int a = 7;
    // int i = 1;
    // while(1){
    //     if(a < k){
    //         a += 7 * pow(10, i);
    //         i++;
    //         continue;
    //     }
    //     if(a % k == 0){
    //         break;
    //     }
    //     // cout << a << endl;
    //     a += 7 * pow(10, i);
    //     i++;
    // }

    // cout << i << endl;
    return 0;
}
