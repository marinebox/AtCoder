#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> a[tsumugi];
    }
    
    bool flag = true;
    int count = 0;

    for (int kaori = 0; kaori < n; kaori++){
        if (a[kaori] % 2 == 1){
            flag = false;
        }
    }
    while (flag){
        // count++;
        for (int matsuri = 0; matsuri< n; matsuri++){
            if(a[matsuri] % 2 == 0){
                a[matsuri] = a[matsuri] / 2;
            }
            else{
                flag = false;
                break;
            }
        }
        if (flag == true) count++;
    }

    cout << count << endl;
    
    return 0;
}