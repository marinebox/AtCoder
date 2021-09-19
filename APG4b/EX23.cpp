#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    map<long long, int> a;
    for(int i = 0; i < n; i++){
        long long tmp;
        cin >> tmp;
        a[tmp]++;
    }

    long long ans;
    long long times = 0;
    for(auto x : a){
        if(times < x.second){
            times = x.second;
            ans = x.first;
        }
    }

    cout << ans << " " << times << endl;
    return 0;
}