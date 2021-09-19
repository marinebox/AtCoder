#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    vector<tuple<string, int,int >> restaurants(n);
    for(int i = 0; i < n; i++){
        string s;
        int p;
        cin >> s >> p;
        restaurants[i] = make_tuple(s, -p, i + 1);
    }
    sort(restaurants.begin(), restaurants.end());
    
    for(auto x : restaurants){
        int i;
        tie(ignore, ignore, i) = x;
        cout << i << endl;
    }
    return 0;
}