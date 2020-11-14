#include <bits/stdc++.h>
using namespace std;

#define ll long long

void isReachable(vector<vector<bool>> isLand, vector<vector<bool>> reachable, int x, int y){
    if(x < 0 || y < 0 || x >= 10 || y >= 10){
        return; //範囲外
    }
    if(!isLand[y][x]){
        return; //海の場合
    }
    if(reachable[y][x]){
        return; //すでに行けることがわかっている場合
    }

    reachable[y][x] = true; //(x, y)は陸地であり、かつ到達可能である
    isReachable(isLand, reachable, x - 1, y);
    isReachable(isLand, reachable, x, y - 1);
    isReachable(isLand, reachable, x + 1, y);
    isReachable(isLand, reachable, x, y + 1);

    return;
}

bool isLandConnected(vector<vector<bool>> isLand){
    int x, y;
    vector<vector<bool>> reachable(10, vector<bool>(10, false));
    for(int i = 0; i < 10; i++){    //陸地を探し出し、そこからすべての陸地に行けるか判定する
        for(int j = 0; j < 10; j++){
            if(isLand[i][j]){
                x = j;
                y = i;
                break;
            }
        }
        //(x, y)は陸地
        isReachable(isLand, reachable, x, y);
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(isLand[i][j] && !reachable[i][j]){
                    //陸地であるがnot reachable
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    vector<vector<bool>> isLand(10, vector<bool>(10, false));
    for(int i = 0; i < 10; i++){
        // string tmp;
        // cin >> tmp;
        // for(int j = 0; j < 10; j++){
        //     if(tmp[j] == 'o'){
        //         isLand[i][j] == true;
        //     }
        // }
        for(int j = 0; j < 10; j++){
            char tmp;
            cin >> tmp;
            if(tmp == 'o'){
                isLand[i][j] = true;
            }
        }
    }

    //一箇所埋め立てたときに全部つながっているかを判定する
    //埋め立て位置の決定
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(isLand[i][j]){
                continue;
            }
            else{
                isLand[i][j] = !isLand[i][j];
                if(isLandConnected(isLand)){
                    cout << "YES" << endl;
                    return 0;
                }
                isLand[i][j] = !isLand[i][j];
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}