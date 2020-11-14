#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    vector<long long> luca;
    luca.push_back(2);
    luca.push_back(1);
    if(n >= 2){
        for(int i = 2; i <= n; i++){
            luca.push_back(luca[i - 2] + luca[i - 1]);
        }
    }

    cout << luca[n] << endl;
    return 0;
}