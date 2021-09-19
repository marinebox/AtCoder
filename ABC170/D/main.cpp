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
    int n;
    cin >> n;
    vector<int> nums(1e6 + 5, 0);
    int MAX = 0;
    int MIN = 1e6 + 5;
    rep(i, n){
        int tmp;
        cin >> tmp;
        nums[tmp]++;
        MAX = max(MAX, tmp);
        MIN = min(MIN, tmp);
    }

    if(MAX == MIN and n != 1){
        cout << 0 << endl;
        return 0;
    }
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }

    long long ans = 0;
    for(int i = 1; i <= MAX; i++){
        // int num = nums[i];
        if(nums[i] == 0) continue;
        int tmp = i * 2;
        while(tmp <= MAX){
            nums[tmp] = 0;
            tmp += i;
        }
    }

    for(auto x:nums){
        if(x != 0) ans++;
    }

    cout << ans << endl;
    return 0;
}
