#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<bool> arrived(n, false);
    vector<long long> lastArrivedTime(n);
    // tuple<long long, bool, long long> arrived;
    long long ans = 0;
    arrived[0] = true;
    lastArrivedTime[0] = 0;
    for(long long i = 0; i < k; i++){
        long long dep, arr;
        dep = ans;
        arr = a[dep] - 1;
        ans = arr;
        if(arrived[arr] == true){
            long long diffTime; //前回の到着回数と今回の到着回数の差を求める
            diffTime = i - lastArrivedTime[arr] + 1;
            long long remain = k - i - 1;
            long long times = remain / diffTime;
            i += diffTime * times;
        }
        else{
            arrived[arr] = true;
            lastArrivedTime[arr] = i + 1;
        }
    }

    cout << ans + 1 << endl;
    return 0;
}