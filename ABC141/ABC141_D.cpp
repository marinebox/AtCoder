#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    priority_queue <long long> a;
    // vector <long long> a(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        int tmp;
        cin >> tmp;
        a.push(tmp);
    }

    //最大の金額のものに割引券を使用するのが最適
    //上記の処理をm回繰り返せばよい

    for (int miki = 0; miki < m; miki++){
        int tmp = a.top();
        tmp /= 2;
        a.pop();
        a.push(tmp);
    }

    // int dist = 0;
    // sort(a.begin(), a.end(), greater<long long>());
    // // cout << a[0] << endl;;
    // vector <long long>::iterator iter = a.begin();
    // *iter /= 2;
    // // cout << *iter << endl;
    // for (int haruka = 1; haruka < m; haruka++){
    //     iter = max_element(a.begin(), (a.begin() + dist + 2));
    //     // cout << *iter << endl;
    //     *iter /= 2;
    //     int tmp = distance(a.begin(), iter);
    //     dist = max(tmp, dist);
    //     if (dist == n - 1){
    //         dist = n - 2;
    //     }
    // }

    // for (int kaori = 0; kaori < n; kaori++){
    //     cout << "All a:" << endl;
    //     cout << a[kaori] << endl;
    //     cout << "Over" << endl;
    // }

    long long ans = 0;
    while (!a.empty()){
        ans += a.top();
        a.pop();
    }

    // long long ans = accumulate(a.begin(), a.end(), 0LL);
    
    // long long ans = 0;
    // for (int konomi = 0; konomi < n; konomi++){
    //     ans += a[konomi];
    // }
    
    cout << ans << endl;
    return 0;
}