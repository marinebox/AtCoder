#include <bits/stdc++.h>
using namespace std;

int complete_time(vector<vector<int>> &children, int x){
    if(children[x].size() == 0){
        return 0;
    }
    int compTime = 0;
    for(auto y:children[x]){
        compTime = max(complete_time(children, y) + 1, compTime);
    }
    return compTime;
}

int main(){
    int n;
    cin >> n;

    vector<int> p(n);
    p[0] = -1;
    for(int i = 1; i < n; i++){
        cin >> p[i];
    }

    vector<vector<int>> children(n);
    for(int i = 1; i < n; i++){
        int parent = p[i];
        children[parent].push_back(i);
    }

    cout << complete_time(children, 0) << endl;
    return 0;
}