#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cout << i + 1 << " " << n - i << endl;
    }
    return 0;
}