#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    long long tmp = -1;
    for(auto x:a){
        if(tmp == x){
            cout << "NO" << endl;
            return 0;
        }
        else{
            tmp = x;
        }
    }
    cout << "YES" << endl;
}