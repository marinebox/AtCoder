#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;

    int tmp;
    bool mark[3][3] = {};
    for(int i = 0; i < n; i++){
        cin >> tmp;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(tmp == a[j][k]){
                    mark[j][k] = true;
                }
            }
        }
    }

    string ans = "No";
    for(int i = 0; i < 3; i++){
        if(mark[i][0] and mark[i][1] and mark[i][2]){
            ans = "Yes";
        }
    }
    for(int i = 0; i < 3; i++){
        if(mark[0][i] and mark[1][i] and mark[2][i]){
            ans = "Yes";
        }
    }
    if(mark[0][0] and mark[1][1] and mark[2][2]){
        ans = "Yes";
    }
    if(mark[0][2] and mark[1][1] and mark[2][0]){
        ans = "Yes";
    }

    cout << ans << endl;
}