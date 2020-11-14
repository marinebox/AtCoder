#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vec1(2);
    vec1[0] = 0;
    vec1[1] = 4;
    vector <int> vec2(2);
    vec2[0] = 2;
    vec2[1] = 3;

    copy(vec2.begin(), vec2.end(), back_inserter(vec1));
    cout << vec1[1] << endl;
    return 0;
}