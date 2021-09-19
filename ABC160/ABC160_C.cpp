#include <bits/stdc++.h>
using namespace std;

int main(){
    long long k, n;
    cin >> k >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    //一番間隔の広いところから始める
    long long distance = 0;
    for(int i = 0; i < n - 1; i++){
        distance = max(distance, a[i + 1] - a[i]);
    }
    distance = max(distance, k + a[0] - a[n - 1]);

    long long ans = k - distance;
    cout << ans << endl;
    return 0;
}