#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    vector <char> a;

    for (auto c:x){
        // cout << c << endl;
        if (a.empty()){
            a.push_back(c);
            continue;
        }
        if (a.back() == 'S' and c == 'T'){
            a.pop_back();
        }
        else{
            a.push_back(c);
        }
    }

    cout << a.size() << endl;
    return 0;
}