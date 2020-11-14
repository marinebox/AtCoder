#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    float ans = n / 1.08;
    int ref = ans;

    if (ans == ref){ // 1.08で割り切れたとき
        cout << ref << endl;
        return 0;
    }
    else{ //　課税で切り捨てがある場合
        float tmp = (ref + 1) * 1.08;
        int tmp2 = tmp;
        if (tmp2 == n){
            cout << ref + 1 << endl;
            return 0;
        }
        else{
            cout <<":(" << endl;
            return 0;
        }
    }
}