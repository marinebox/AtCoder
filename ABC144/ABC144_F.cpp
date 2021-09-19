#include <bits/stdc++.h>
using namespace std;

int route(int num_room, vector <int> &path, vector<double> &exp_room){
    int num_paths = path[num_room].size();
    double exp = 0;
    for (int kaede = 0; kaede < num_paths; kaede++){
        exp += ((exp_room[path[num_room][kaede]] + 1) / num_paths)
        exp_room[num_room] = exp;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector <vector <int>> path(n + 1, vector <int>(0));
    vector <double> exp_room(n + 1, 0);
    for (int tsumugi = 0; tsumugi < m; tsumugi++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        path[tmp1].push_back(tmp2);
    }
    
    for (int karen = n - 1; karen > 0; karen--){
        route(karen, path, exp_room)
    }
    int num_paths_of_1 = path[]

    return 0;
}