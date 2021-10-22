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

struct mystruct{
    int number;
    int can_use = 0;
    // 0ならpqにpush
    vector<int> right = {};
    // numberより右側に置かねばならない数字
};

int main(){
    int n, m; cin >> n >> m;
    vector<pair<int, int>> ab(m);
    for(auto &p : ab){
        cin >> p.first >> p.second;
    }

    vector<mystruct> info(n + 1);
    for(int i = 1; i <= n; i++){
        info[i].number = i;
    }
    for(auto p : ab){
        auto left = p.first, right = p.second;
        info[left].right.emplace_back(right);
        info[right].can_use++;
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto p : info){
        if(p.number == 0) continue;
        if(p.can_use == 0) pq.push(p.number);
    }

    vector<int> ans;
    while(!pq.empty()){
        auto top_number = pq.top();
        pq.pop();
        ans.emplace_back(top_number);
        for(auto r : info[top_number].right){
            info[r].can_use--;
            if(info[r].can_use == 0) pq.push(info[r].number);
        }
    }

    if(ans.size() != n) cout << -1 << endl;
    else{
        for(int i = 0; i < n; i++){
            if(i == 0) cout << ans[i];
            else cout << ' ' << ans[i];
        }
        cout << endl;
    }

    return 0;
}