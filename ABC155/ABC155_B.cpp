#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    string ans = "APPROVED";
    for(auto x:a){
        if(x % 2 == 0){
            if(x % 3 != 0 and x % 5 != 0){
                ans = "DENIED";
                cout << ans << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;
}