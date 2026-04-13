#include<stdio.h>
#include"matrix.h"
Matrix create_matrix(int rows, int columns){
        Matrix m;
        m.rows=rows;
        m.columns=columns;
        return m;
    }
 
    
void inputMatrix(Matrix m){
    int i;
    for(i=0 ;i <m.rows * m.columns; i++){
        printf("Enter element : ",i);
        scanf("%d",&m.inf[i]);
    }
}   
Matrix add_matrices(Matrix a, Matrix b){
    Matrix result = create_matrix(a.rows,a.columns);
    int i;
    for (i=0; i < a.rows * a.columns; i++){
        result.inf[i] = a.inf[i] + b.inf[i];
     }
     return result;
}


Matrix subtract_matrices(Matrix a, Matrix b){
    Matrix result = create_matrix(a.rows,a.columns);
    int i;
    for (i=0; i < a.rows * a.columns; i++){
        result.inf[i] = a.inf[i] - b.inf[i];
     }
     return result;
}
void print_matrix(Matrix m){
    int i, j;
    for(i=0 ; i<m.rows; i++){
        for (j=0; j<m.columns; j++){
            printf("%d",m.inf[i*m.columns + j]);
        }
        printf("\n");
    }   
}


int main(){
    int rows, columns;
    printf("Please Enter rows: ");
    scanf("%d", &rows);


    printf("Please Enter columns: ");
    scanf("%d", &columns);


    Matrix a = create_matrix(rows,columns);
    Matrix b = create_matrix(rows,columns);


    printf("Please Enter Matrix A\n");
    inputMatrix(a);
    printf("Please Enter Matrix B\n");
    inputMatrix(b);

    Matrix sum = add_matrices(a,b);
    Matrix sub = subtract_matrices(a,b);

    printf("\nThe sum is: \n",sum);
    printf("\nThe subtraction is: \n",sub);
    return 0;
}
 
