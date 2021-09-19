#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
using namespace std;
using ll = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;


int main(){
    string s;
    cin >> s;

    vector<string> words;
    bool flag = false;
    string tmp;
    for(auto c : s){
        if(c >= 'A' && c <= 'Z' && !flag){
            flag = true;
            c = (c - 'A' + 'a');
            tmp.push_back(c);
        }
        else if(c >= 'A' && c <= 'Z' && flag){
            c = (c - 'A' + 'a');
            tmp.push_back(c);
            flag = false;
            words.push_back(tmp);
            tmp = "";
        }
        else{
            tmp.push_back(c);
        }
    }
    sort(words.begin(), words.end());
    for(auto c : words){
        c[0] = c[0] - 'a' + 'A';
        c[c.size() - 1] = c[c.size() - 1] - 'a' + 'A';
        cout << c;
    }
    cout << endl;
    return 0;
}
