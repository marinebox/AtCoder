#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin >> n >> a;
    int ans = a;
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        char op;
        int b;
        cin >> op >> b;
        switch (op){
            case '+':
                ans += b;
                break;
            case '-':
                ans -= b;
                break;
            case '*':
                ans *= b;
                break;
            case '/':
                if (b == 0){
                    cout << "error" << endl;
                    return 0;
                }
                else{
                    ans /= b;
                }
                break;
        }
        cout << tsumugi + 1 << ':' << ans << endl;
    }

    return 0;
}