#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, x;
    cin >> k >> x;
    //石は2,000,001個

    int num_min = x - k + 1, num_max = x + k - 1;

    for (int tsumugi = num_min; tsumugi <= num_max; tsumugi++){
        cout << tsumugi << " ";
    }
    cout << endl;

    return 0;

}