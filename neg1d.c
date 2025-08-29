#include <stdio.h>
int main(){
    int size, r1;
    printf("Enter the array's size: ");
    scanf("%d",&size);
    int a[100];
    for(r1=0; r1<size; r1++){ printf("a[%d] = ", r1); scanf("%d",&a[r1]); }
    printf("Negative elements from an Array: ");
    for(r1=0; r1<size; r1++) if(a[r1]<0) printf("%d ", a[r1]);
    printf("\n");
    return 0;
}