#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    for (int tsumugi = 2; tsumugi <= pow(num, 0.5); tsumugi++){
        if (num % tsumugi == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int x;
    cin >> x;

    int tmp = x;
    while (1){
        if (isPrime(tmp)){
            break;
        }
        tmp++;
    }

    cout << tmp << endl;
    return 0;
}