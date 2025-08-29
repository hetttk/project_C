#include <stdio.h>
int main(){
    float bsal, hr, dr, tr, gpay;
    printf("Base salary: "); scanf("%f",&bsal);
    printf("HRA %%: "); scanf("%f",&hr);
    printf("DA %%: "); scanf("%f",&dr);
    printf("TA %%: "); scanf("%f",&tr);
    gpay = bsal + (bsal*hr/100.0) + (bsal*dr/100.0) + (bsal*tr/100.0);
    printf("Gross Salary: Rs. %.0f\n", gpay);
    return 0;
}