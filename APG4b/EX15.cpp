#include <bits/stdc++.h>
using namespace std;

void makeVec(int n, vector<int> &vec){
    for(int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> vec[tsumugi];
    }

    return;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    makeVec(n, a);
    makeVec(n, b);
    makeVec(n, c);

    int sumA = accumulate(a.begin(), a.end(), 0);
    int sumB = accumulate(b.begin(), b.end(), 0);
    int sumC = accumulate(c.begin(), c.end(), 0);
    
    long long ans = sumA * sumB * sumC;

    cout << ans << endl;
    return 0;
}