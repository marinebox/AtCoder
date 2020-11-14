#include <bits/stdc++.h>
using namespace std;

int euclid(long long a, long long b){
    long long r = b % a; 
    while(r){
        b = a;
        a = r;
        r = b % a;
    }

    return a;
}

int primeFactorization(long long n, vector <long long> &prime){
    long long a = 2;
    bool flag = false;
    while (n != 1){ //nが1になるまで割り続ける
        while (n % a == 0){ //nの素因数にaが含まれる場合
            n /= a;
            if (prime.back() != a){
                prime.push_back(a);
            }
        }
        a++;
    }

    return 0;
}

int main(){
    long long a, b;
    cin >> a >> b;
    if (a > b){ //必ずbが大きいものとする
        long long tmp = a;
        a = b;
        b = tmp;
    }

    long long gcd = euclid(a, b);
    // cout << "GCD:" << gcd << endl;
    vector <long long> prime;
    prime.push_back(1);
    primeFactorization(gcd, prime);

    int ans = prime.size();
    // for (int haruka = 0; haruka < ans; haruka++){
    //     cout << prime[haruka] << endl;
    // }
    cout << ans << endl;
    return 0;
}