#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }

    sort(d.begin(), d.end(), greater<int>());
    int ans = 0;
    int tmp = 0;
    for(auto x:d){
        if(x == tmp){
            continue;
        }
        tmp = x;
        ans++;
    }

    cout << ans << endl;
    return 0;
}