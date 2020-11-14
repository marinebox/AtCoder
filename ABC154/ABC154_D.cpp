#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<double> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    vector<double> expectedValues(n);
    expectedValues[0] = (p[0] + 1) / 2;
    for(long long i = 1; i < n; i++){
        expectedValues[i] = expectedValues[i - 1] + (p[i] + 1) / 2;
    }
    double ans = expectedValues[k - 1];
    for(long long i = 0; i < n - k; i++){
        ans = max(ans, expectedValues[k + i] - expectedValues[i]);
    }

    cout << fixed << setprecision(12) << ans << endl;
}