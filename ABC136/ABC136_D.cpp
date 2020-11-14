#include <bits/stdc++.h>
using namespace std;

int placeChild(int now, int numberR, int numberL, vector<int> &kids){
    int Lstart = now - numberL;
    int Rstart = Lstart - numberR;

    int kidsOnL = numberR / 2 + (numberL + 1) / 2;
    int kidsOnR = numberR + numberL - kidsOnL;

    kids[Lstart - 1] = kidsOnR;
    kids[Lstart] = kidsOnL;
    return 0;
}

int main(){
    string s;
    cin >> s;
    int size = (int)s.size();
    // vector<char> cs(size);
    vector<int> children(size, 0);
    // for (int tsumugi = 0; tsumugi < size; tsumugi++){
    //     cs[tsumugi] = s[tsumugi];
    // }
    
    //csは文字列の配列
    //childrenは最終的な子供の配置とする
    //childrenに答えを代入していく

    int R_renzoku = 0;
    int L_renzoku = 0;
    int L_start;
    bool flag =false;  //R連続からL連続になったときtrueとする
    
    for (int matsuri = 0; matsuri < size; matsuri++){
        if (s[matsuri] == 'R' and flag == false){
            R_renzoku++;
        }
        else if (s[matsuri] == 'L'){
            L_renzoku++;
            if (flag == false){
                L_start = matsuri;
            }
            flag = true;
        }
        else if (s[matsuri] == 'R' and flag == true){
            placeChild(matsuri, R_renzoku, L_renzoku, children);
            R_renzoku = 1;
            L_renzoku = 0;
            flag = false;
        }
        if (matsuri == size - 1){
            placeChild(size, R_renzoku, L_renzoku, children);
        }
    }

    for (int kaori = 0; kaori < size; kaori++){
        cout << children[kaori] << " ";
    }
    cout << endl;
    return 0;
}