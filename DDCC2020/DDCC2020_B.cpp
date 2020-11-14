#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <long long> a(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }
    
    long long length = accumulate(a.begin(), a.end(), 0);
    int ans = 0;
    
    long long left = 0, left1, left2;
    int num_overHalf;
    for (int karen = 0; karen < n; karen++){
        left += a[karen];
        if (left >= (length / 2)){
            num_overHalf = karen;   //左のほうが長くなる場所
            left1 = left;
            left2 = left - a[karen];
            break;
        }
    }
    long long right1 = length - left1;
    long long right2 = length - left2;
    // 1は必ずleftのほうが長い
    // 2は必ずrightのほうが長い
    // 左右の棒の長さが短いほうを処理したほうが安上り
    long long dif1 = left1 - right1;
    long long dif2 = right2 - left2;
    if (dif1 <= dif2){
        // 1のほうが左右の差が小さい場合
        ans = dif1;
    }
    else{
        // 2のほうが左右の差が小さい場合
        ans = dif2;
    }

    cout << ans << endl;
    return 0;
}