#include <bits/stdc++.h>
using namespace std;

void saiten(vector<vector<int>> &a, int &ac, int &wc){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            int ca = (i + 1) * (j + 1);
            if(ca == a[i][j]){
                ac++;
            }
            else{
                wc++;
                a[i][j] = ca;
            }
        }
    }
}

int main(){
    vector<vector<int>> a(9, vector<int>(9));
    for(int i = 0; i < 9 ; i++){
        for (int j = 0; j < 9; j++){
            cin >> a[i][j];
        }
    }

    int correct_count = 0;
    int wrong_count = 0;

    saiten(a, correct_count, wrong_count);

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << a[i][j];
            if(j < 8){
                cout << " ";
            }
            else{
                cout << endl;
            }
        }
    }

    cout << correct_count << endl;
    cout << wrong_count << endl;

    return 0;
}  