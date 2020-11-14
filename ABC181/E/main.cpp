#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector<long long> h(n), w(m);
    for(int i = 0; i < n; i++) cin >> h[i];
    for(int i = 0; i < m; i++) cin >> w[i];

    sort(h.begin(), h.end());

    vector<long long> sum1((n + 1) / 2), sum2((n + 1) / 2);
    int i = 0;
    while(1){
        sum1[i / 2] = 
    }
}