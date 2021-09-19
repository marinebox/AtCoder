#include <bits/stdc++.h>
using namespace std;

int main(){
    int t1, t2;
    long long a1, a2, b1, b2;
    cin >> t1 >> t2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;

    long long dista1, dista2;
    long long distb1, distb2;
    dista1 = t1 * a1;
    dista2 = t2 * a2;
    distb1 = t1 * b1;
    distb2 = t2 * b2;
    long long seta, setb;
    seta = dista1 + dista2;
    setb = distb1 + distb2;
    if (seta == setb){
        cout << "infinity" << endl;
        return 0;
    }
    dif1 = dista1 - distb1;
    dif2 = dista2 - distb2;
    if (dif1 > 0){
        int tmp;
        dif1 = tmp;
        dif1 = dif2;
        dif2 = tmp;
    }
    //必ず最初aはbに遅れるとする
    long long ans = 0:
    while(1){

    }
}