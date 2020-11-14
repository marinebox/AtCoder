#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int q;
    cin >> q;

    bool rev = false;
    deque<char> ans;
    for(auto x:s){
        ans.push_back(x);
    }
    for(int i = 0; i < q; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 1){
            rev = !rev;
        }
        else{
            int f;
            char c;
            cin >> f >> c;
            if(!rev and f == 1 or rev and tmp == 2){
                ans.push_front(c);
            }
            else{
                ans.push_back(c);
            }
        }
    }

    if(rev){
        reverse(ans.begin(), ans.end());
    }

    for(auto x:ans){
        cout << x;
    }

    cout << endl;
    return 0;
}