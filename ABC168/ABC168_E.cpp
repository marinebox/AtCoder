#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    // vector<double> AoverB, BoverA;
    unordered_map<double, ll> AoverB, BoverA;
    for(ll i = 0; i < n; i++){
        double a, b, ab, ba;
        cin >> a >> b;
        // AoverB[i] = a/b;
        // BoverA[i] = b/a;
        AoverB[a/b]++;
        BoverA[b/a]++;
    }

//     unordered_map<double, long long> ab, ba;
//     for(int i = 0; i < n; i++){
//         ab[AoverB[i]]++;
//         ab[]
//     }

    ll ab, ba;
    ab = AoverB.size();
    ba = BoverA.size();
    
}