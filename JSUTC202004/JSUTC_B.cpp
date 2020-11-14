#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> R, B;
    for(int i = 0; i < n; i++){
        int tmp;
        char color;
        cin >> tmp >> color;
        if(color == 'R'){
            R.push_back(tmp);
        }
        else{
            B.push_back(tmp);
        }
    }

    sort(R.begin(), R.end());
    sort(B.begin(), B.end());
    int rLen = R.size();
    int bLen = B.size();
    for(int i = 0; i < rLen; i++){
        cout << R[i] << endl;
    }
    for(int i = 0; i < bLen; i++){
        cout << B[i] << endl;
    }
    return 0;
}