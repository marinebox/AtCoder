#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> h(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> h[tsumugi];
    }

    if (n == 1){
        cout << "Yes" << endl;
        return 0;
    }
    // 右から考える
    // 左と同じ、あるいは大きければよい

    // vector <int>::iterator testIter = h.begin();
    // cout << *(testIter + 1) << endl;

    for (vector <int>::reverse_iterator iter = h.rbegin(); iter != h.rend(); iter++){
        if (*(iter + 1) - *iter > 1 ){
            // cout << *(iter + 1) << endl;
            // cout << *iter << endl;
            cout << "No" << endl;
            // cout << "Case1" << endl;
            return 0;
        }
        else if (*(iter + 1) - *iter == 1){
            // cout << *(iter + 1) << endl;
            --*(iter + 1);
            // cout << *(iter + 1) << endl;
            // cout << "Case2" << endl;
        }
        // else if (*(iter - 1) < *iter){
        //     cout << "No" << endl;
        //     cout << "Case3" << endl;
        //     return 0;
        // }
    }

    cout << "Yes" << endl;
    return 0;
}