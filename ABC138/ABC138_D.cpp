#include <bits/stdc++.h>
using namespace std;

// int addScore(int top, int add, vector <long long> &score,
//             vector <vector <int>> &tops){ //頂点, スコア
//     // cout << "CalledDone" << endl;
//     score[top] += add;
//     if (!tops[top].empty()){
//         for (int miki = 0; miki < tops[top].size(); miki++){
//             // cout << "Done4" << endl;
//             // cout << tops[top][miki] << endl;
//             // cout << add << endl;
//             addScore(tops[top][miki], add, score, tops);
//         }
//     }
//     return 0;
// }

int addScore(int top, /*int add,*/ vector <long long> &count,
             vector <vector <int>> &tree){
        for (auto yukiho : tree[top]){
            count[yukiho] += count[top];
            addScore(yukiho, count, tree);
        }
    }

int main(){
    int n, q;
    cin >> n >> q;
    // cout << n << endl;
    // cout << q << endl;
    // vector <int> a(n), b(n);
    // for (int tsumugi = 0; tsumugi < n; tsumugi++){
    //     cin >> a[tsumugi] >> b[tsumugi];
    // }
    vector <vector <int>> tree(n + 1, vector <int>(0));
    for (int kaede = 0; kaede < n - 1; kaede++){
        int temp1, temp2;
        cin >> temp1 >> temp2;
        tree[temp1].push_back(temp2);
        // cout << "Done1" << endl;
    }
    // vector <int> p(q), x(q);
    // for (int matsuri = 0; matsuri < q; matsuri++){
    //     cin >> p[matsuri] >> x[matsuri];
    //     // cout << "Done2" << endl;
    // }
    // unordered_map <int, int> work;
    // vector <int> work(n + 1);
    // for (int mizuki = 0; mizuki < q; mizuki++){
    //     int tp, tx;
    //     cin >> tp >> tx;
    //     work[tp] += tx;
    // }

    vector <long long> count(n + 1, 0);
    for (int shiho = 0; shiho < q; shiho++){
        int tp, tx;
        cin >> tp >> tx;
        count[tp] += tx;
    }

    // for (int kaori = 1; kaori <= n; kaori++){
    //     // cout << "Done3" << endl;
    //     // cout << p[kaori] << endl;
    //     // cout << x[kaori] << endl;
    //     // cout << kaori << endl;
    //     // cout << work[kaori] << endl;
    //     // addScore(p[kaori], x[kaori], count, tree);
    //     if (work[kaori] == 0) continue;
    //     addScore(kaori, work[kaori], count, tree);
    //     // cout << "End!! Next!!" << endl;
    // }

    addScore(1, count, tree);

    for (int reika = 1; reika <= n; reika++){
        cout << count[reika] << " ";
    }
    cout << endl;
    return 0;
}
