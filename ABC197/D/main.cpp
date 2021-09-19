#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for(int i = 0; i < n; i++)
#define vv(T) vector<vector<T>>
#define coa cout << ans << endl; return 0;
#define cinvec(vec) for(auto &i : vec) cin >> i
#define deg_to_rad(deg) ((deg) / 360) * 2 * M_PI
#define rad_to_deg(rad) ((rad) / 2 / M_PI) * 360
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
using dint  = deque<int>;

template<typename T>
class Matrix{
public:
    int row, col;
    vector<vector<T>> mat;
    Matrix(){}
    // identity matrix
    Matrix(int n) : row(n), col(n){
        this->mat = vector<vector<T>>(row, vector<T>(row, 0));
        for(int i = 0; i < n; i++) this-> mat[i][i] = 1;
    }
    // row * col Matrix
    Matrix(int row, int col, T init = 0) : row(row), col(col){
        this-> mat = vector<vector<T>>(row, vector<T>(col, init));
    }
    // print all
    void debug(){
        for(auto r : this-> mat){
            for(auto c : r){
                cout << c << ' ';
            }
            cout << endl;
        }
        return;
    }
    // transpose matrix
    Matrix<T> transpose(){
        Matrix<T> result(this->col, this->row);
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < this->col; j++){
                result.mat[j][i] = this->mat[i][j];
            }
        }
        return result;
    }
    // 2D rotate
    void make_2D_rot(double deg){
        this->mat[0][0] = cos(deg);
        this->mat[1][1] = cos(deg);
        this->mat[1][0] = -sin(deg);
        this->mat[0][1] = sin(deg);
        return;
    }

    // operator overload
    Matrix<T> operator+(const Matrix<T> &x){
        assert(this->row == x.row);
        assert(this->col == x.col);
        Matrix<T> result(this->row, this->col);
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < this->col; j++){
                result.mat[i][j] = this->mat[i][j] + x.mat[i][j];
            }
        }
        return result;
    }
    Matrix<T> operator-(const Matrix<T> &x){
        assert(this->row == x.row);
        assert(this->col == x.col);
        Matrix<T> result(this->row, this->col);
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < this->col; j++){
                result.mat[i][j] = this->mat[i][j] - x.mat[i][j];
            }
        }
        return result;
    }
    Matrix<T> operator*(const Matrix<T> &x){
        assert(this->col == x.row);
        Matrix<T> result(this->row, x.col);
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < x.col; j++){
                for(int k = 0; k < this->col; k++){
                    result.mat[i][j] += this->mat[i][k] * x.mat[k][j];
                }
            }
        }
        return result;
    }
    Matrix<T> operator*(const T &x){
        Matrix result = *this;
        for(int i = 0; i < result.row; i++){
            for(int j = 0; j < result.col; j++){
                result.mat[i][j] *= x;
            }
        }
        return result;
    }

    Matrix<T>& operator+=(const Matrix<T> &x){
        assert(this->row == x.row);
        assert(this->col == x.col);
        Matrix<T> result(this->row, this->col);
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < this->col; j++){
                result.mat[i][j] = this->mat[i][j] + x.mat[i][j];
            }
        }
        this->mat = result.mat;
        return *this;
    }
    Matrix<T>& operator-=(const Matrix<T> &x){
        assert(this->row == x.row);
        assert(this->col == x.col);
        Matrix<T> result(this->row, this->col);
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < this->col; j++){
                result.mat[i][j] = this->mat[i][j] - x.mat[i][j];
            }
        }
        this->mat = result.mat;
        return *this;
    }
    Matrix<T>& operator*=(const Matrix<T> &x){
        assert(this->col == x.row);
        Matrix<T> result(this->row, x.col);
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < x.row; j++){
                for(int k = 0; k < this->col; k++){
                    result.mat[i][j] += this->mat[j][k] * x.mat[k][j];
                }
            }
        }
        this->mat = result.mat;
        return *this;
    }
    Matrix<T>& operator*=(const T &x){
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < this->col; j++){
                this->mat[i][j] *= x;
            }
        }
        return *this;
    }

    // template<typename U>
    Matrix<T>& operator/=(const T &x){
        for(int i =0 ; i < this->row; i++){
            for(int j = 0; j < this->col; j++){
                this->mat[i][j] /= x;
            }
        }
        return *this;
    }
};

int main(){
    int n; cin >> n;
    Matrix<double> x0(2, 1), xh(2, 1);
    cin >> x0.mat[0][0] >> x0.mat[1][0];
    cin >> xh.mat[0][0] >> xh.mat[1][0];

    // x0.debug();

    Matrix<double> xc = x0 + xh;
    xc /= 2;
    auto x0p = x0 - xc;


    double deg = (double)180 / (n / 2);
    double rad = deg_to_rad(deg);

    // cout << deg << endl;

    Matrix<double> rot(2, 2);
    rot.make_2D_rot(-rad);

    // x0p.debug();
    // rot.debug();

    auto ans = rot * x0p;
    ans += xc;

    // cout << xc.mat[0][0] << xc.mat[1][0] << endl;
    ans.debug();
    return 0;
}
