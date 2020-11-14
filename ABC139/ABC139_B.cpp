// Power Socket
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int socket = 1;
    int tap = 0;
    while (socket < b){
        socket -= 1;
        socket += a;
        tap++;
    }

    cout << tap << endl;
    return 0;
}