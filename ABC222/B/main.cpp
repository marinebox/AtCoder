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
    int n, p; cin >> n >> p;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a < p) ans++;
    }

    cout << ans << endl;
    return 0;
}
