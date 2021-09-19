#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long ans = 0;
    vector<vector<long long>> c(10, vector<long long>(10, 0));
    for(int i = 1; i <= n; i++){
        int iTop, iBottom, iKeta = 0;
        int tmp = i;
        while(tmp){
            tmp /= 10;
            iKeta++;
        }
        iTop = i / pow(10, iKeta - 1);
        iBottom = i % 10;
        c[iTop][iBottom]++;
    }

    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            ans += c[i][j] * c[j][i];
        }
    }

    cout << ans << endl;
    return 0;
}