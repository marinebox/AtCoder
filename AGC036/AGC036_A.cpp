#include <bits/stdc++.h>
using namespace std;

int main(){
    long long s;
    cin >> s;
    vector<int>x(3);
    vector<int>y(3);

    //頂点の1つは必ず原点にあるとする
    x[0] = 0;
    y[0] = 0;

    //ほかの頂点は必ずx,y軸上にそれぞれあるものとする。
    x[1] = 0;
    y[2] = 0;
    
    //1e9を満たす必要がある == sqrt(面積)より小さい一辺を取る必要がある？

    
}