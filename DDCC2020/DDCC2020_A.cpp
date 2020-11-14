#include <bits/stdc++.h>
using namespace std;

int reward(int score){
    int money;
    switch (score){
        case 1:
            money = 300000;
            break;
        case 2:
            money = 200000;
            break;
        case 3:
            money = 100000;
            break;
    }
    
    return money;
}

int main(){
    int x, y;
    cin >> x >> y;
    
    int ans = 0;
    if (x <= 3){
        ans += reward(x);
    }
    if (y <= 3){
        ans += reward(y);
    }
    if (x == 1 and y == 1){
        ans += 400000;
    }

    cout << ans << endl;
    return 0;
}