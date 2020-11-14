#include <bits/stdc++.h>
using namespace std;

void makeVec(priority_queue<long long> &que, long long len){
    for(long long i = 0; i < len; i++){
        long long tmp;
        cin >> tmp;
        que.push(tmp);
    }
    return;
}

int main(){
    long long x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    priority_queue<long long> p, q, r;
    makeVec(p, a);
    makeVec(q, b);
    makeVec(r, c);

    long long ans = 0;
    for(int i = 0; i < x; i++){
        r.push(p.top());
        p.pop();
    }
    for(int i = 0; i < y; i++){
        r.push(q.top());
        q.pop();
    }
    for(int i = 0; i < x + y; i++){
        ans += r.top();
        r.pop();
    }
    // long long ateRed = 0, ateGreen = 0;
    // for(long long i = 0; i < x + y; i++){
    //     long long red, green, white;
    //     if(ateRed != x){
    //         red = p.top();
    //     }
    //     else{
    //         red = 0;
    //     }
    //     if(ateGreen != y){
    //         green = q.top();
    //     }
    //     else{
    //         green = 0;
    //     }
    //     if(!r.empty()){
    //         white = r.top();
    //     }
    //     else{
    //         white = 0;
    //     }
    //     // when red is the greatest.
    //     // eat red apple.
    //     if(red >= green && red >= white){
    //         ateRed++;
    //         ans += red;
    //         p.pop();
    //     }
    //     //when green is the greatest.
    //     //eat green apple.
    //     else if(green > red && green >= white){
    //         ateGreen++;
    //         ans += green;
    //         q.pop();
    //     }
    //     //when white is the greatest.
    //     //eat white apple.
    //     else if(white > red && white > green){
    //         ans += white;
    //         r.pop();
    //         long long rw, gw;
    //         rw = white - red;
    //         gw = white - green;
    //         if(rw >= gw){
    //             ateRed++;

    //         }
    //         else{
    //             ateGreen++;
    //         }
    //     }
    // }
    // for(long long i = 0; i < x; i++){
    //     long long red, white;
    //     red = p.top();
    //     white = r.top();
    //     if(red >= white){
    //         ans += red;
    //         p.pop();
    //     }
    //     else{
    //         ans += white;
    //         r.pop();
    //     }
    // }
    // for(long long i = 0; i < y; i++){
    //     long long green, white;
    //     green = q.top();
    //     white = r.top();
    //     if(green >= white){
    //         ans += green;
    //         q.pop();
    //     }
    //     else{
    //         ans += white;
    //         r.pop();
    //     }
    // }

    cout << ans << endl;
    return 0;
}