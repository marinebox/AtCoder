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

const int n = 1e5 / 2 + 1;
vector<bool> primes(n);

void eratosthenes(vector<bool> prime){
    rep(i, n) prime[i] = 1;
    prime[0] = prime[1] = 0;
    rep(i, n){
        if(prime[i]){
            for(int j = i + i; j < n; j += i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    int q;
    cin >> q;

    eratosthenes(primes);
    

    for(int i = 1; i < n; i ++){

        if(!primes[i]) continue;

    }

    rep(i, q){
        int l, r;
        cin >> l >> r;
    }
}
