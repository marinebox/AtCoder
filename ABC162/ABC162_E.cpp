#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long gcd(long long a, long long b){
    if(a < b){
        swap(a, b);
    }
    long long r = a % b;
    while(r){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main(){
    long long n, k;
    cin >> n >> k;

    long long ans = 0;
    long long tmp;
    
}