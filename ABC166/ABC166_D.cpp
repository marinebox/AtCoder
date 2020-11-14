#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin >> x;

    // aは常にせいであると仮定する
    int a = 0, b;
    for(int i = 0; i < 121; i++){
        for(int j = - 120; j < 121; j++){
            long long tmp = pow(i, 5) - pow(j, 5);
            if(tmp == x){
                a = i;
                b = j;
                break;
            }
        }
    }
    
    cout << a << " " << b << endl;
    return 0;
}
