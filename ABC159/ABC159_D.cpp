#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n), numbers(n + 1, 0);
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        numbers[tmp]++;
    }

    long long ans = 0;
    for(auto x:numbers){
        ans += x * (x - 1) / 2;
    }
    for(int k = 0; k < n; k++){
        long long ansOfk = ans;
        ansOfk -= numbers[a[k]] - 1;
        cout << ansOfk << endl;
    }

    return 0;
}