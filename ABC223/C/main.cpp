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


int main(){
    int n; cin >> n;
    vector<pair<double, double>> ab(n);
    for(int i = 0; i < n; i++){
        double a, b; cin >> a >> b;
        auto p = make_pair(a, b);
        ab[i] = p;
    }

    vector<double> require_seconds_to_burn(n);
    for(int i = 0; i < n; i++){
        auto p = ab[i];
        auto length = p.first;
        auto speed = p.second;
        auto seconds = length / speed;
        // cout << "sec: " << seconds << endl;
        require_seconds_to_burn[i] = seconds;
    }

    auto total_seconds = accumulate(require_seconds_to_burn.begin(), require_seconds_to_burn.end(), 0.0);
    auto meet_seconds = total_seconds / 2;

    // cout << "total: " << total_seconds << endl;
    // cout << "meet: " << meet_seconds << endl;

    double ans = 0, remain_seconds = meet_seconds;
    for(int i = 0; i < n; i++){
        auto present_rope = ab[i];
        auto present_requrie_seconds = require_seconds_to_burn[i];
        if(remain_seconds > present_requrie_seconds){
            ans += present_rope.first;
            remain_seconds -= present_requrie_seconds;
        }
        else{
            ans += remain_seconds * present_rope.second;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
