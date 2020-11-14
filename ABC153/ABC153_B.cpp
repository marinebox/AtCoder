#include <bits/stdc++.h>
using namespace std;

void makeVec(vector<int> &vec){
    long long len = vec.size();
    for(int i = 0; i < len; i++){
        cin >> vec[i];
    }
    return;
} 

int main(){
    long long h, n;
    cin >> h >> n;
    vector<int> a(n);
    makeVec(a);
    int sum = accumulate(a.begin(), a.end(), 0);
    string ans;
    if(sum >= h) ans = "Yes";
    else ans = "No";
    cout << ans << endl;
}