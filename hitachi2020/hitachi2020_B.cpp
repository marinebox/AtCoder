#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, m;
    cin >> a >> b >> m;
    vector<int> fridge(a), range(b);
    vector<vector<int>> coupon(m, vector<int>(3));
    for(int i = 0; i < a; i++){
        cin >> fridge[i];
    }
    for(int i = 0; i < b; i++){
        cin >> range[i];
    }
    for(int i = 0; i < m; i++){
        cin >> coupon[i][0] >> coupon[i][1] >> coupon[i][2];
    }

    int fridgeMin = *min_element(fridge.begin(), fridge.end());
    int rangeMin = *min_element(range.begin(), range.end());
    int costMinWithoutCoupon = fridgeMin + rangeMin;

    //calculate cost with using coupon
    int costMinWithCoupon = 1000000;
    for(int i = 0; i < m; i++){
        int costOfFridge = fridge[coupon[i][0] - 1];
        int costOfRange = range[coupon[i][1] - 1];
        int costWithCoupon = costOfFridge + costOfRange - coupon[i][2];
        costMinWithCoupon = min(costMinWithCoupon, costWithCoupon);
    }
    
    int ans = min(costMinWithCoupon, costMinWithoutCoupon);
    cout << ans << endl;
    return 0;
}