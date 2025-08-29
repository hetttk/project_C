#include <stdio.h>
int main(){
    int rows, cols, r1, c1;
    printf("Enter the array's row size: "); scanf("%d",&rows);
    printf("Enter the array's column size: "); scanf("%d",&cols);
    int a[10][10];
    for(r1=0; r1<rows; r1++) for(c1=0; c1<cols; c1++){ printf("a[%d][%d] = ", r1,c1); scanf("%d",&a[r1][c1]); }
    int rowNo, colNo, sumRow=0, sumCol=0;
    printf("Enter row number: "); scanf("%d",&rowNo);
    printf("Elements of row %d: ", rowNo);
    for(c1=0; c1<cols; c1++){ printf("%d ", a[rowNo][c1]); sumRow+= a[rowNo][c1];}
    printf("\nThe sum of a row %d: %d\n", rowNo, sumRow);
    printf("\nEnter column number: "); scanf("%d",&colNo);
    printf("Elements of column %d: ", colNo);
    for(r1=0; r1<rows; r1++){ printf("%d ", a[r1][colNo]); sumCol+= a[r1][colNo]; }
    printf("\nThe sum of column %d: %d\n", colNo, sumCol);
    return 0;
}