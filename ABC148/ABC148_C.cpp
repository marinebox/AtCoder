#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long x;
    x = a * b;

    long long tmp, r;
    if (a < b){
        tmp = a;
        a = b;
        b = tmp;
    }

    r = a % b;
    while (r != 0){
        a = b;
        b = r;
        r = a% b;
    }

    cout << x / b << endl;
    return 0;
}