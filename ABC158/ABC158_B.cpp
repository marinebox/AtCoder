#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    long long sum = a + b;
    long long times = n / sum;
    long long remain = n - (times * sum);
    long long numOfBlue = a * times;
    if(remain < a){
        numOfBlue += remain;
    }
    else{
        numOfBlue += a;
    }

    cout << numOfBlue << endl;
}