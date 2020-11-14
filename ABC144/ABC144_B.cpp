#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n < 10){
        cout << "Yes" << endl;
        return 0;
    }
    for (int karen = 2; karen < 10; karen++){
        if(n % karen == 0){
            if(n / karen < 10){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}