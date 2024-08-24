#ifndef MATRIX_H
#define MATRIX_H
#include <vector>

#define LD long double

class Matrix{
    public:
        std::vector<std::vector<LD> > M;
        int r, c;
        void init(int r_,int c_){
            r = r_;
            c = c_;
            M.resize(r_);
            for(int i=0;i<r_;i++){
                M[i].resize(c_);
            }
        }
};

Matrix c_p(Matrix &A, Matrix &B){
    Matrix C;
    C.init(A.r, B.c);
    int t = A.c;
    for(int i=0;i<A.c;i++){
        for(int l=0;l<t)
    }
}

#endif