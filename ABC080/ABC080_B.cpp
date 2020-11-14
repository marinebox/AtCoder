#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long tmp = n;
    int fn = 0;
    for(int karen = 0; karen < 10; karen++){
        if(tmp != 0){
            fn += (tmp % 10);
            tmp /= 10;
        }
    }
    // cout << fn << endl;
    if(n % fn == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}