#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;


int main(){
    int n;
    cin >> n;
    vector<pair<double, double>> point(n);
    rep(i, n){
        int x, y;
        cin >> x >> y;
        point[i] = make_pair(x, y);
    }

    double ans = 0;
    rep(i, n - 1){
        for(int j = i + 1; j < n; j++){
            double tmp;
            tmp = pow(point[j].first- point[i].first, 2) + pow(point[j].second - point[i].second, 2);
            tmp = sqrt(tmp);
            ans = max(ans, tmp);
        }
    }

    cout << ans << endl;
    return 0;
}
