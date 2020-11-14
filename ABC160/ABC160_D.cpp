#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> ans(n - 1, 0);

    for(int i = 1; i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            int tmp = min(j - i, abs(x - i) + 1 + abs(j -y));
            ans[tmp - 1]++;
        }
    }

    for(auto x:ans){
        cout << x << endl;
    }
    return 0;
}