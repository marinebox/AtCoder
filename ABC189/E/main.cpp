#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
using namespace std;
using namespace atcoder;
using ll = __int64_t;
template<typename T>
using vec = vector<T>;
template<typename T>
using vvec = vector<vector<T>>;
using qint = queue<int>;
using sint = stack<int>;
using pii = pair<int, int>;

class Matrix{
public:
    long long row, col;
    vector<vector<long long>> mat;
    Matrix(){}
    // identity matrix
    Matrix(long long n) : row(n), col(n){
        this->mat = vector<vector<long long>> (row, vector<long long>(row, 0));
        for(long long i = 0; i < n; i++) this->mat[i][i] = 1;
    }
    // row * col matrix
    Matrix(long long row, long long col, long long init = 0LL) : row(row), col(col){
        this->mat = vector<vector<long long>> (row, vector<long long>(col, init));
    }
    // print all
    void debug(){
        for(auto r : this->mat){
            for(auto c : r){
                cout << c << ' ';
            }
            cout << endl;
        }
    }
    // transpose matrix
    Matrix transpose(){
        Matrix result(this->col, this->row);
        for(long long i = 0; i < this->row; i++){
            for(long long j = 0; j < this->col; j++){
                result.mat[j][i] = this->mat[i][j];
            }
        }
        return result;
    }

    // operator overload
    Matrix operator+(const Matrix &x){
        assert(this->row == x.row);
        assert(this->col == x.col);
        Matrix result(this->row, this->col);
        for(long long i = 0; i < this->row; i++){
            for(long long j = 0; j < this->col; j++){
                result.mat[i][j] = this->mat[i][j] + x.mat[i][j];
            }
        }
        return result;
    }
    Matrix operator-(const Matrix &x){
        assert(this->row == x.row);
        assert(this->col == x.col);
        Matrix result(this->row, this->col);
        for(long long i = 0; i < this->row; i++){
            for(long long j = 0; j < this->col; j++){
                result.mat[i][j] = this->mat[i][j] - x.mat[i][j];
            }
        }
        return result;
    }
    Matrix operator*(const Matrix &x){
        assert(this->col == x.row);
        Matrix result(this->row, x.col);
        for(long long i = 0; i < this->row; i++){
            for(long long j = 0; j < x.col; j++){
                for(long long k = 0; k < this->col; k++){
                    result.mat[i][j] += this->mat[i][k] * x.mat[k][j];
                }
            }
        }
        return result;
    }
    Matrix operator*(const long long &x){
        Matrix result = *this;
        for(long long i = 0; i < result.row; i++){
            for(long long j = 0; j < result.col; j++){
                result.mat[i][j] *= x;
            }
        }
        return result;
    }

    // Matrix& operator=(const Matrix &x){
    //     return *x;
    // }
    Matrix& operator+=(const Matrix &x){
        assert(this->row == x.row);
        assert(this->col == x.col);
        Matrix result(this->row, this->col);
        for(long long i = 0; i < this->row; i++){
            for(long long j = 0; j < this->col; j++){
                result.mat[i][j] = this->mat[i][j] + x.mat[i][j];
            }
        }
        this->mat = result.mat;
        return *this;
    }
    Matrix& operator-=(const Matrix &x){
        assert(this->row == x.row);
        assert(this->col == x.col);
        Matrix result(this->row, this->col);
        for(long long i = 0; i < this->row; i++){
            for(long long j = 0; j < this->col; j++){
                result.mat[i][j] = this->mat[i][j] - x.mat[i][j];
            }
        }
        this->mat = result.mat;
        return *this;
    }
    Matrix& operator*=(const Matrix &x){
        assert(this->col == x.row);
        Matrix result(this->row, x.col);
        for(long long i = 0; i < this->row; i++){
            for(long long j = 0; j < x.col; j++){
                for(long long k = 0; k < this->col; k++){
                    result.mat[i][j] += this->mat[i][k] * x.mat[k][j];
                }
            }
        }
        this->mat = result.mat;
        return *this;
    }
    Matrix& operator*=(const long long &x){
        for(long long i = 0; i < this->row; i++){
            for(long long j = 0; j < this->col; j++){
                this->mat[i][j] *= x;
            }
        }
        return *this;
    }
};

int main(){
    int n;
    cin >> n;
    vector<Matrix> koma(n, Matrix(3, 1));
    for(auto &k : koma){
        cin >> k.mat[0][0];
        cin >> k.mat[1][0];
        k.mat[2][0] = 1;
    }

    int m;
    cin >> m;
    vector<Matrix> operations(m + 1, Matrix(3));
    for(int i = 1; i <= m; i++){
        int op1;
        cin >> op1;
        Matrix op(3);
        if(op1 == 1){
            op.mat[0] = {0, 1, 0};
            op.mat[1] = {-1, 0, 0};
        }
        else if(op1 == 2){
            op.mat[0] = {0, -1, 0};
            op.mat[1] = {1, 0, 0};
        }
        else{
            ll p;
            cin >> p;
            if(op1 == 3){
                op.mat[0] = {-1, 0, 2 * p};
            }
            if(op1 == 4){
                op.mat[1] = {0, -1, 2 * p};
            }
        }
        operations[i] = op;
        operations[i] *= operations[i - 1];
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        b--;
        auto op = operations[a];
        auto k = koma[b];
        auto ans = op * k;
        cout << ans.mat[0][0] << ' ' << ans.mat[1][0] << endl;
    }
    return 0;
}