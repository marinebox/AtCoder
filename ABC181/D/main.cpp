#include <bits/stdc++.h>
using namespace std;


// 下３桁が８の倍数なら良い

int main(){
    string s;
    cin >> s;
    vector<int> nums(10, 0);
    for(auto c : s){
        auto n = c - '0';
        nums[n]++;
    }

    string ans = "No";

    if(s.size() == 1){
        if(nums[0] != 0 || nums[8] != 0) ans = "Yes";
    }
    else if(s.size() == 2){
        for(int i = 16; i < 100; i += 8){
            string n = to_string(i);
            auto tnums = nums;
            bool isCorrect = true;
            for(auto c : n){
                auto n = c - '0';
                tnums[n]--;
            }
            for(auto i : tnums){
                if(i < 0) isCorrect = false;
            }
            if(isCorrect) ans = "Yes";
        }
    }
    else{
        for(int i = 104; i < 1000; i += 8){
            string n = to_string(i);
            auto tnums = nums;
            bool isCorrect = true;
            for(auto c : n){
                auto n = c -'0';
                tnums[n]--;
            }
            for(auto i : tnums){
                if(i < 0) isCorrect = false;
            }
            if(isCorrect) ans = "Yes";
        }
    }

    cout << ans << endl;
    return 0;
}

// int main(){
//     string s;
//     cin >> s;
//     vector<int> nums(10, 0);
//     for(auto c : s){
//         auto n = c - '0';
//         nums[n]++;
//     }

//     string ans = "No";

//     for(int num = 0; num < 1000; num++){
//         if(num % 2 != 0 || num % 100 % 4 != 0) continue;
//         auto nt = nums;
//         ostringstream szero;
//         szero << setfill('0') << setw(3) << num;
//         string nu = szero.str();
//         vector<int> numbers(10, 0);
//         bool flag = true;
//         for(auto c : nu){
//             auto n = c - '0';
//             nt[n]--;
//             if(nt[n] < 0){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag == false) continue;
//         ans = "Yes";
//     }

//     cout << ans << endl;
//     return 0;
// }

// int main(){
//     string s;
//     cin >> s;
//     vector<int> nums(10, 0);
//     for(auto c : s){
//         auto n = c - '0';
//         nums[n]++;
//     }

//     // for(int i = 0; i < 10; i++){
//     //     cout << i << ' ' << nums[i] << endl;
//     // }

//     string ans = "No";

//     for(int i = 0; i < 1000; i++){
//         bool flag = false;
//         if(i % 2 == 0){
//             auto j = i % 100;
//             if(j % 4 == 0){
//                 // cout << j << endl;
//                 auto tmp = to_string(i);
//                 vector<int> anum(10, 0);
//                 for(auto c : tmp){
//                     auto n = c - '0';
//                     anum[n]++;
//                 }
//                 // for(int tp = 0; tp < 10; tp++){
//                 //     cout << tp << ' ' << anum[tp] << endl;
//                 // }
//                 for(int k = 0; k < 10; k++){
//                     if(nums[k] < anum[k]){
//                         flag = false;
//                         goto ENDFOR;
//                     }
//                     flag = true;
//                 }
//             }
//         }
// ENDFOR:
//         if(flag){
//             ans = "Yes";
//             break;
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }