#include <bits/stdc++.h>
using namespace std;

#define ll long long

void no(){
    cout << "No" << endl;
    return;
}

void solve(vector<long long> &set, vector<string> &s, vector<char> &operations){
    for(auto x : s){
        int op0, op1;
        op0 = x[0] - 'A';
        op1 = x[1] - 'A';
        if(set[op0] == 0 && set[op1] == 0){
            no();
            return;
        }
        else{

        }
    }
    return;
}

bool solve1(vector<long long> &set, vector<string> &s, vector<char> &operations){
    for(auto x : s){
        int op0, op1;
        op0 = x[0] - 'A';
        op1 = x[1] - 'A';
        if(set[op0] == 0 && set[op1] == 0){
            no();
            return false;
        }
        if(set[op0]){
            set[op0]++;
            set[op1]--;
            operations.push_back(x[0]);
            operations.push_back(x[1]);
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    // long long a, b, c;
    // cin >> n >> a >> b >> c;
    vector<long long> set(3);
    cin >> set[0] >> set[1] >> set[2];
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    string ans;
    vector<char> operations;
    
    long long acm = accumulate(set.begin(), set.end(), 0);
    if(acm == 0){
        no();
        return 0;
    }
    if(acm == 1){
        if(!solve1(set, s, operations)){
            return;
        }
    }

    if(acm >= 2){
        solve(set, s, operations);
    }

    cout << "Yes" << endl;
    for(auto x : operations){
        cout << x << endl;
    }
    return 0;
}