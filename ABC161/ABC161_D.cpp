#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;

    long long tmp = 0;
    queue<long long> ans;
    for(long long i = 1; i < 10; i++){
        ans.push(i);
    }
    for(int i = 0; i < k; i++){
        long long tmp = ans.front();
        ans.pop();
        if(i == k - 1){
            cout << tmp << endl;
            return 0;
        }
        if(tmp % 10 != 0){
            ans.push(10 * tmp + tmp % 10 - 1);
        }
        ans.push(10 * tmp + tmp % 10);
        if(tmp % 10 != 9){
            ans.push(10 * tmp + tmp % 10 + 1);
        }
    }
}