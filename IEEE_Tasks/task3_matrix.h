#ifndef matrix_h
#define matrix_h
typedef struct {
    int rows, columns, *inf;

}Matrix;
Matrix create_matrix(int rows,int columns);

Matrix add_matrices(Matrix a, Matrix b);
Matrix subtract_matrices(Matrix a, Matrix b);
#endif
