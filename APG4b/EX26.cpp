#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

char getVarName(){
        char name, eq;
        cin >> name >> eq;
        return name;
}

int solveInt(map<char, int> &variables, char term){
    int ret;
    if(term >= 'a' && term <= 'z'){
        ret = variables[term];
    }
    else{
        ret = term - '0';
    }
    return ret;
}

int calcIntEq(map<char, int> &variables){
    int ret, num;
    char term, op;
    cin >> term >> op;
    ret = solveInt(variables, term);
    while(op != ';'){
        cin >> term;
        num = solveInt(variables, term);
        if(op == '+'){
            ret += num;
        }
        else{
            ret -= num;
        }
        cin >> op;
    }
    return ret;
}

void solveVec(vector<int> &ret, vector<int> next, bool isSum){
    for(int i = 0; i < ret.size(); i++){
        if(isSum){
            ret[i] += next[i];
        }
        else{
            ret[i] -= next[i];
        }
    }
    return;
}

vector<int> readVector(map<char, int> &variables, map<char, vector<int>> &vectors){
    char mode = ',';
    cin >> mode;
    vector<int> retVec;
    if(mode == '['){
        char term, comma = ',';
        int num;
        while(comma != ']'){
            cin >> term;
            num = solveInt(variables, term);
            retVec.push_back(num);
            cin >> comma;
        }
    }
    else{        
        retVec = vectors[mode];
    }
    return retVec;
}

vector<int> calcVecEq(map<char, int> &variables, map<char, vector<int>> &vectors){
    vector<int> retVec;
    vector<int> nextVec;
    char mode = ',', op;
    retVec = readVector(variables, vectors);    //最初の一個は普通に読み込む
    cin >> op;
    while(op != ';'){
        nextVec = readVector(variables, vectors);
        solveVec(retVec, nextVec, op == '+');
        cin >> op;
    }
    return retVec;
}

void print_int(map<char, int> &variables){
    int ret;
    ret = calcIntEq(variables);
    cout << ret << endl;
    return;
}

void print_vec(map<char, int> &variables, map<char, vector<int>> &vectors){
    vector<int> retVec;
    retVec = calcVecEq(variables, vectors);
    cout << '[' << ' ';
    for(auto x : retVec){
        cout << x << ' ';
    }
    cout << ']' << endl;
    return;
}

int main(){
    int n;
    cin >> n;
    map<char, int> varibales;
    map<char, vector<int>> vectors;

    for(int i = 0; i < n; i++){
        string order;
        cin >> order;

        if(order == "int"){
            char varName;
            varName = getVarName();
            // varibales[varName] = varInt(varibales);
            varibales[varName] = calcIntEq(varibales);
        }

        if(order == "print_int"){
            print_int(varibales);
        }

        if(order == "vec"){
            char varName;
            varName = getVarName();
            vectors[varName] = calcVecEq(varibales, vectors);
        }

        if(order == "print_vec"){
            print_vec(varibales, vectors);
        }
    }

    return 0;
}