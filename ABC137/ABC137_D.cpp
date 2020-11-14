#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    pair <int, int> works[n];
    for (int tsumugi = 0; tsumugi < n; tsumugi++){
        cin >> works[tsumugi].first >> works[tsumugi].second;
    }

    sort(works, works + n);

    //最終日の前日から考察する
    int reward = 0;
    priority_queue <int> queue;
    int index = 0;
    for (int remainDays = 1; remainDays <= m; remainDays++){
        while (works[index].first == remainDays){
            queue.push(works[index].second);
            index++;
        }
        if(!queue.empty()){
            reward += queue.top();
            // cout << "remain days:" << remainDays << endl;
            // cout << "top:" << queue.top() << endl;
            // cout << "size:" << queue.size() << endl;
            queue.pop();
            // cout << "poped size:" << queue.size() << endl;
        }
    }    

    cout << reward << endl;
    return 0;
}