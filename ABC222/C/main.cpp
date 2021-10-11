#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
// #include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define cinvec(vec) for(auto &i : vec) cin >> i
#define deg_to_rad(deg) ((deg) / 360) * 2 * M_PI
#define rad_to_deg(rad) ((rad) / 2 / M_PI) * 360
using namespace std;
// using namespace atcoder;
using ll = __int64_t;
// template<typename T>
// using vec = vector<T>;
// template<typename T>
// using vvec = vector<vector<T>>;
// using qint = queue<int>;
// using sint = stack<int>;
// using pii = pair<int, int>;
// using dint  = deque<int>;
// using Graph = vector<vector<int>>;

vector<string> a;
vector<priority_queue<pair<int, int>>> ranking;
// first ... wins
// second .. player number * -1

bool is_first_player_win(char p1, char p2){
    bool ret = false;
    if((p1 == 'G' && p2 == 'C') || (p1 == 'C' && p2 == 'P') || (p1 == 'P' && p2 == 'G')) ret = true;
    return ret;
}

void debug(const pair<int, int> p, const int round){
    cout << "p.first: " << p.first << " p.second: " << p.second << " p.hand: " << a[-p.second][round] <<  endl;
}

void make_next_round(const int round){
    while(!ranking[round].empty()){
        const auto next_round = round + 1;
        const auto player1 = ranking[round].top();
        const auto p1_num = player1.second * -1;
        const auto p1_hand = a[p1_num][round];
        ranking[round].pop();
        const auto player2 = ranking[round].top();
        const auto p2_num = player2.second * -1;
        const auto p2_hand = a[p2_num][round];
        ranking[round].pop();

        // debug(player1, round);
        // debug(player2, round);

        // draw
        if(p1_hand == p2_hand){
            ranking[next_round].push(player1);
            ranking[next_round].push(player2);
        }
        else if(is_first_player_win(p1_hand, p2_hand)){
            // p1 won.
            ranking[next_round].push(make_pair(player1.first + 1, player1.second));
            ranking[next_round].push(player2);
        }
        else if(is_first_player_win(p2_hand, p1_hand)){
            // p2 won.
            ranking[next_round].push(player1);
            ranking[next_round].push(make_pair(player2.first + 1, player2.second));
        }
    }
    // cout << endl;
    return;
}

int main(){
    int n, m; cin >> n >> m;
    a.resize(2 * n);
    for(auto &s:a) cin >> s;

    // make rank on round 0
    ranking.resize(m + 5);
    {
        for(int i = 0; i < 2 * n; i++){
            auto p = make_pair(0, -i);
            ranking[0].push(p);
        }
    }

    for(int i = 0; i < m; i++) make_next_round(i);

    while(!ranking[m].empty()){
        cout << ranking[m].top().second * -1 + 1 << endl;
        ranking[m].pop();
    }
    return 0;
}