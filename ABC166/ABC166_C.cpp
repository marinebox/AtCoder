#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<long long> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    // vector<long long> a(m), b(m);
    // for(long long i = 0; i < m; i++){
    //     cin >> a[i] >> b[i];
    // }
    vector<vector<int>> way(n,vector<int>());
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        way[a].push_back(b);
        way[b].push_back(a);
    }
    
    vector<int> isGoodPlace(n, -1);
    for(int i = 0; i < n; i++){
        if(isGoodPlace[i] != -1){
            continue;
        }
        int height = h[i];
        for(auto x:way[i]){
            int height2 = h[x];
            if(height > height2){
                isGoodPlace[x] = 0;
            }
            else{
                isGoodPlace[i] = 0;
            }
        }
    }

    int ans = 0;
    for(auto x:isGoodPlace){
        if(x == -1){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}