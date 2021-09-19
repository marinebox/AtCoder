#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, q;
    cin >> n >> m >> q;
    // vector<int> a(q), b(q), c(q), d(q);
    vector<vector<int>> set(q, vector<int>(4));
    for(int i = 0; i < q; i++){
        // cin >> a[i] >> b [i] >> c[i] >> d[i];
        for(int j = 0; j < 4; j ++){
            cin >> set[i][j];
        }
    }

    sort(set.begin(),set.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[3] > beta[3];});


    vector<int> ans(n, -1);
    ans[0] = 1;
    // vector<bool> flags(n, false);
    // flags[0] = true;
    long long point = 0;
    // for(int i = 0; i < n; i++){
    //     ans[i] = i + 1;
    // // }
    // for(int i = 0; i < q; i++){
    //     auto iter = max_element(d.begin(), d.end());
    //     auto index = distance(d.begin(), iter);
    //     int left, right;
    //     left = a[index];
    //     right = b[index];
        
    //     // if(flags[right]){
    //     //     continue;
    //     // }

    //     ans[right] = ans[left] + c[index];
    //     point += d[index];
    //     d[index] = 0;
    // }
    for(auto x:set){
        int left = x[0] - 1;
        int right = x[1] - 1;
        if(ans[left] != -1 && ans[right] != -1){
            if(ans[right] - ans[left] == x[2]){
                point += x[3];
            }
            continue;
        }
        if(ans[left] != -1){
            ans[right] = ans[left] + x[2];
        }
        if(ans[right] != -1){
            ans[left] = ans[right] - x[2];
        }
        point += x[3];
    }
    // for(int i = 0; i < ans.size(); i++){
    //     if(ans[i] == -1){
    //         ans[i] = ans[i - 1];
    //     }
    // }

    cout << point << endl;
    return 0;
}