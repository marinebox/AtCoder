#include <bits/stdc++.h>
using namespace std;

void makeVec(vector<long long> &vec){
    long long len = vec.size();
    for(long long i = 0; i < len; i++){
        cin >> vec[i];
    }
    return;
}

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> h(n);
    makeVec(h);

    long long ans = 0;
    if(k >= n){
        cout << 0 << endl;
        return 0;
    }

    sort(h.begin(), h.end());
    ans = accumulate(h.begin(), h.end() - k, 0L);
    cout << ans << endl;
    return 0;
}