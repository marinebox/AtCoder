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
    int n, q;
    cin >> n >> q;
    vector<vector<char>> follows(n, vector<char>(n, 'N')), followers(n, vector<char>(n, 'N'));
    rep(i, q){
        int num, c1, c2;
        cin >> num;
        switch (num){
            case 1:
                cin >> c1 >> c2;
                c1--; c2--;
                follows[c1][c2] = 'Y';
                followers[c2][c1] = 'Y';
                break;
            case 2:
                cin >> c1;
                c1--;
                for(int i = 0; i < n; i++){
                    char isFollowed = followers[c1][i];
                    if(isFollowed == 'Y'){
                        follows[c1][i] = 'Y';
                        followers[i][c1] = 'Y';
                    }
                }
                break;
            case 3:
                cin >> c1;
                c1--;
                vector<char> c1Followings = follows[c1];
                for(int i = 0; i < n; i++){
                    auto isC1Follow = c1Followings[i];
                    if(isC1Follow == 'N') continue;
                    auto xFollowings = follows[i];
                    for(int j = 0; j < n; j++){
                        if(j == c1) continue;
                        char isXFollow = xFollowings[j];
                        if(isXFollow == 'Y'){
                            follows[c1][j] = 'Y';
                            followers[j][c1] = 'Y';
                        }
                    }
                }
                break;
        }
    }

    for(auto x:follows){
        for(auto y:x){
            cout << y;
        }
        cout << endl;
    }
    return 0;
}
