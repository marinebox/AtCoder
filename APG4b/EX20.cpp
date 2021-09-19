#include <bits/stdc++.h>
using namespace std;

int countReportNum(vector<vector<int>> &children, int x){
    if(children[x].size() == 0){
        return 1;
    }

    int sheets = 1;
    for(auto y:children[x]){
        sheets += countReportNum(children, y);
    }
    return sheets;
}

int main(){
    int n;
    cin >> n;

    vector<int> p(n);
    p[0] = -1;  //means TOP organization.
    for(int i = 1; i < n; i++){
        cin >> p[i];
    }

    vector<vector<int>> children(n);
    for(int i = 1; i < n; i++){
        int parent = p[i];
        children[parent].push_back(i);
    }

    for(int i = 0; i < n; i++){
        cout << countReportNum(children, i) << endl;
    }
}