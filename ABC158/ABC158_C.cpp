#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    //小数の消費税は切り捨て
    for(int i = 0; i <= 1500; i++){
        int tmpa, tmpb;
        tmpa = i * 0.08;
        tmpb = i * 0.1;
        if(tmpa == a and tmpb == b){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}