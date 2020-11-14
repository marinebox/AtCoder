#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    //各商品は100万個存在する
    //xは最大で10万
    
    int num = x / 100; //この数だけ商品を買うことができる
    //numまでの間に条件を満たせばよい
    int under2 = x % 100;
    int tmp = 0;
    for (int karen = 0; karen < num; karen++){
        if (under2 >= 5){
            under2 -= 5;
            continue;
        }
        switch(under2){
            case 4:
                under2 -= 4;
                break;
            case 3:
                under2 -= 3;
                break;
            case 2:
                under2 -= 2;
                break;
            case 1:
                under2 -= 1;
                break;
        }
        if (under2 == 0){
            break;
        }
    }
    char ans;
    if (under2 == 0){
        ans = '1';
    }
    else{
        ans = '0';
    }
    
    cout << ans << endl;
    return 0;
}