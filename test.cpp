#include <bits/stdc++.h>
#include <quadmath.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const long long MOD = 13;

class modll{
    long long x;

public:
    modll(long long y){
        y = ((y % MOD + MOD) % MOD);
        this->x = y;
    };
    long long getX(){
        return this->x;
    };
    void add(long long y){
        long long tmp = this->x;
        tmp += y;
        if(tmp > MOD){
            tmp -= MOD;
        }
        if(tmp < 0){
            tmp += MOD;
        }
        this->x = tmp;
    };
    void multiplication(long long y){
        long long tmp = this->x;
        tmp *= y;
        tmp = ((tmp % MOD + MOD) % MOD);
        this->x = tmp;
    };
};

class Matrix{
public:
    long long row, col;
    vector<vector<long long>> mat;
    Matrix(){};
    // identity matrix
    Matrix(long long n) : row(n), col(n){
        this->mat = vector<vector<long long>> (row, vector<long long>(row, 0));
        for(long long i = 0; i < n; i++) this->mat[i][i] = 1;
    }
    // row * col matrix
    Matrix(long long row, long long col, long long init = 0) : row(row), col(col){
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

class Coordinate{
public:
    std::vector<long long> coord;

    // Coordinate() : coord(3, 0){}
    Coordinate(long long x = 0, long long y = 0, long long z = 0) : coord(3, 0){
        this->coord[0] = x;
        this->coord[1] = y;
        this->coord[2] = z;
    }

    // return square of absolute value
    long long sqabs(){
        long long result;
        result = std::pow(this->coord[0], 2) + std::pow(this->coord[1], 2) + std::pow(this->coord[2], 2);
        return result;
    }
    double dabs(){
        double result = std::sqrt(this->sqabs());
        return result;
    }
    // a cross x
    Coordinate outer_product(const Coordinate &x){
        Coordinate result;
        for(int i = 0; i < 3; i++){
            result.coord[i] = 
                this->coord[(i + 1) % 3] * x.coord[(i + 2) % 3] - this->coord[(i + 2) % 3] * x.coord[(i + 1) % 3];
        }
        return result;
    }

    Coordinate operator+(const Coordinate &x){
        Coordinate result;
        for(int i = 0; i < 3; i++){
            result.coord[i] = this->coord[i] + x.coord[i];
        }
        return result;
    }
    Coordinate operator-(const Coordinate &x){
        Coordinate result;
        for(int i = 0; i < 3; i++){
            result.coord[i] = this->coord[i] - x.coord[i];
        }
        return result;
    }
    Coordinate operator*(const long long &x){
        Coordinate result;
        for(int i = 0; i < 3; i++){
            result.coord[i] = this->coord[i] * x;
        }
        return result;
    }
    long long operator*(const Coordinate &x){
        long long result;
        result = std::inner_product(this->coord.begin(), this->coord.end(), x.coord.begin(), 0LL);
        return result;
    }
    
    Coordinate& operator+=(const Coordinate &x){
        for(int i = 0; i < 3; i++){
            this->coord[i] += x.coord[i];
        }
        return *this;
    }
    Coordinate& operator-=(const Coordinate &x){
        for(int i = 0; i < 3; i++){
            this->coord[i] -= x.coord[i];
        }
        return *this;
    }
    Coordinate& operator*=(const long long &x){
        for(int i = 0; i < 3; i++){
            this->coord[i] *= x;
        }
        return *this;
    }
};

int main(){
    // long long y = 3;
    // modll test = modll(y);
    // // cout << (-6 % MOD) << endl;
    // rep(i, 20){
    //     test.multiplication(-2);
    //     cout << test.getX() << endl;
    // }
    // cout << test.getNum() << endl;

    Matrix m1(3), m2(3);
    m1 *= 5;
    m1.mat[0][1] = 6;
    m1.mat[0][2] = 9;
    m2 *= 3;
    m2.mat[2][1] = 9;
    m1.debug();
    cout << endl;
    m2.debug();
    cout << endl;
    (m1+=m2).debug();
    return 0;
}