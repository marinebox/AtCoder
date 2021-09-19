#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector <long long> a(n), f(n);
    long long a_sum, f_sum;
    for (long long tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }
    for (long long matsuri = 0; matsuri < n; matsuri++){
        cin >> f[matsuri];
    }
    a_sum = accumulate(a.begin(), a.end(), 0);
    f_sum = accumulate(f.begin(), f.end(), 0);


    cout << a_sum << endl;
    return 0;
}