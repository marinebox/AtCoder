#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    long long k;
    cin >> n >> k >> q;
    vector <int> a(q);
    for (int tsumugi = 0; tsumugi < q; tsumugi++){
        cin >> a[tsumugi];
    }

    //加点式で考え、最後に初期点以上稼いでいない人を
    //リタイアとする
    vector <int> score(n, k - q);
    for (int matsuri = 0; matsuri < q; matsuri++){
        score[a[matsuri] - 1]++;
    }

    for (int kaori = 0; kaori < n; kaori++){
        if (score[kaori] > 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}