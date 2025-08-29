#include <stdio.h>
int main(){
    int left, right, last;
    printf("First angle: "); scanf("%d",&left);
    printf("Second angle: "); scanf("%d",&right);
    last = 180 - (left+right);
    printf("Third angle: %d\n", last);
    return 0;
}