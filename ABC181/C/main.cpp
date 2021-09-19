#include <bits/stdc++.h>
using namespace std;

struct coordinate{
    int x, y;
};

bool cross(coordinate a, coordinate b){
    bool ret = false;
    int tmp = a.x * b.y - a.y * b.x;
    if(tmp == 0) ret = true;
    return ret;
}

int main(){
    int n;
    cin >> n;

    vector<coordinate> points(n);
    for(int i = 0; i < n; i++){
        coordinate tmp;
        cin >> tmp.x >> tmp.y;
        // cout << tmp.x << tmp.y << endl;
        // points.emplace_back(tmp);
        points[i] = tmp;
    }
    // cout << points[0].x << endl;

    string ans = "No";
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                auto a = points[i];
                auto b = points[j];
                auto c = points[k];
                coordinate ab, bc;
                ab.x = b.x - a.x;
                ab.y = b.y - a.y;
                bc.x = c.x - b.x;
                bc.y = c.y - b.y;
                // cout << endl;
                // cout << ab.x << endl;
                if(cross(ab, bc)){
                    // cout << ab.x << ' '<< ab.y << endl;
                    // cout << i << endl;
                    // cout << a.x << ' ' << a.y << endl;
                    // cout << j << endl;
                    // cout << k << endl;
                    // cout << ab.x << ' ' << ab.y << endl;
                    // cout << bc.x << ' ' << bc.y << endl;
                    ans = "Yes";
                    goto END;
                }
            }
        }
    }

END:
    cout << ans << endl;
    return 0;
}