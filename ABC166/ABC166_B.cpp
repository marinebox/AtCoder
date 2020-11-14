#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    // vector<int> d(k);
    // vector<vector<int>> a(k,vector<int>());
    // for(int i = 0; i < k; i++){
    //     cin >> d[i];
    //     for(int j = 0; j < d[i]; j++){
    //         int tmp;
    //         cin >> tmp;
    //         a[i].push_back(tmp);
    //     }
    // }

    vector<bool> doesOkashiHave(n, false);
    for(int i = 0; i < k; i++){
        int d;
        cin >> d;
        for(int j = 0; j < d; j++){
            int a;
            cin >> a;
            doesOkashiHave[a - 1] = true;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(doesOkashiHave[i] == false){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}