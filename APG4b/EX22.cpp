#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    vector<pair<ll, ll>> pairs(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        pairs[i] = make_pair(b, a);
    }
    sort(pairs.begin(), pairs.end());
    for(auto x : pairs){
        cout << x.second << " " << x.first << endl;
    }
    return 0;
}