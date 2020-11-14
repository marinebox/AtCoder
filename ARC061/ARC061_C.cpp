#include <bits/stdc++.h>
using namespace std;

long long calc(string s){
    long long ans = 0;
    int len = s.size();
    for(int i = 0; i < len; i++){
        // int tmp = int(s[i]);
        ans += int(s[i] - '0') * pow(10, len -1 -i);
    }
    return ans;
}

long long sum(string s, int num){
    long long ans = 0;
    if(num == 0){   //+記号を入れなくてよい場合は与えられた文字列の総和を返す
        return calc(s);
    }
    //文字列を二つに分ける
    //ただし、この時右側の文字列がnumより小さくなってはいけない
    //逆に言えば左側の文字列はlen - numのサイズにできる
    int len = s.size();
    for(int i = 1; i <= len - num; i++){
        string left, right;
        for(int j = 0; j < i; j++){
            left.push_back(s[j]);
        }
        right = s.substr(i);
        ans += calc(left);
        ans += sum(right, num - 1);
    }
    return ans;
}

int main(){
    string s;
    cin >> s;


    int len = s.size();
    long long ans = 0;
    //len - 1個の+を付けることができる
    for(int tsumugi = 0; tsumugi < len; tsumugi++){
        ans += sum(s, tsumugi);
    }

    cout << ans << endl;
    return 0;
}