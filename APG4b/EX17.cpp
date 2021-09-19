#include <bits/stdc++.h>
using namespace std;

void makeVec(int n, vector<int> &vec){
    for(int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> vec[tsumugi];
    }

    return;
}

int main(){
    int n, s;
    cin >> n >> s;
    vector<int> a(n), p(n);
    makeVec(n, a);
    makeVec(n, p);

    int ans = 0;
    for(int karen = 0; karen < n; karen++){
        for(int matsuri = 0; matsuri < n; matsuri++){
            int value = a[karen] + p[matsuri];
            if(value == s){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}