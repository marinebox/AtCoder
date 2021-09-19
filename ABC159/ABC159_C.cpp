#include <bits/stdc++.h>
using namespace std;

int main(){
    double l;
    cin >> l;

    double size;
    double volume;
    size = l / 3;
    volume = pow(size, 3);

    cout << fixed << setprecision(12) << volume << endl;
}