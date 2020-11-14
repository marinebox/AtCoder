#include <bits/stdc++.h>
using namespace std;

int main(){
   pair <int, int> a[3];
   a[0].first = 1;
   a[0].second = 4;
   a[1] = {3,4};
   a[2] = {1,2};

   sort(a, a + 3);

   cout << a[1].second << endl;
   return 0;
}