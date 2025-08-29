#include <stdio.h>
int main(){
    int rows, cols, r1, c1;
    printf("Enter the array's row & column size: ");
    scanf("%d %d",&rows,&cols);
    int a[10][10];
    for(r1=0; r1<rows; r1++) for(c1=0; c1<cols; c1++){ printf("a[%d][%d] = ", r1,c1); scanf("%d",&a[r1][c1]); }
    printf("The transpose matrix of an array:\n");
    for(c1=0; c1<cols; c1++){ for(r1=0; r1<rows; r1++) printf("%d ", a[r1][c1]); printf("\n"); }
    return 0;
}