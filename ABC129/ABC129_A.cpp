// Airplane
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> time(3);
    cin >> time[0] >> time[1] >> time[2];

    sort(time.begin(), time.end());
    int ans = time[0] + time[1];

    cout << ans << endl;
    return 0;
}