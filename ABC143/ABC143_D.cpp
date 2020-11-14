#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> l(n);
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> l[tsumugi];
    }
    sort(l.begin(), l.end());
    int tmp = l[0];
    vector <pair <int, int>> len;
    int count = 1;
    for (int matsuri = 1; matsuri < n; matsuri++){
        if (tmp == l[matsuri]){
            count++;
        }
        else{
            len.push_back(make_pair(tmp, count));
            tmp = l[matsuri];
            count = 1;
        }
    }
    len.push_back(make_pair(tmp, count));

    long long ans = 0;
    int len_size = len.size();
}