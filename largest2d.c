#include <stdio.h>
int main(){
    int rows, cols, r1, c1; 
    printf("Enter the array's row size: "); scanf("%d",&rows);
    printf("Enter the array's column size: "); scanf("%d",&cols);
    int a[10][10]; int big;
    for(r1=0; r1<rows; r1++){ for(c1=0; c1<cols; c1++){ printf("a[%d][%d] = ", r1,c1); scanf("%d",&a[r1][c1]); if(r1==0&&c1==0) big=a[0][0]; if(a[r1][c1]>big) big=a[r1][c1]; } }
    printf("The largest element is: %d\n", big);
    return 0;
}