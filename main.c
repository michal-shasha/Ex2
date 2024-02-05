#include <stdio.h>
#include "my_mat.h"
#define N 10

int main(){
    int matrix[N][N];
    char c;

    printf("Enter A to build a matrix: ");
    scanf("%c", &c);

    while (c != 'A'){
        printf("You need to build a matrix first! Enter A to build a matrix: ");
        scanf("%c", &c);
    }
    
    buildMatrix(matrix);

    printf("Enter A or B or C or D: ");
    scanf("%c", &c);

    while (c != 'D'){
        if(c == 'A'){
            buildMatrix(matrix); 
        }
        if(c == 'B'){
            exists(matrix);
        }
        if(c == 'C'){
            shortest(matrix);
        }

        printf("Enter A or B or C or D: ");
        scanf("%c", &c);
    }   
}
