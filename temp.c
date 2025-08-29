#include <stdio.h>
int main(){
    float cTemp, fTemp;
    printf("Enter Celsius: ");
    scanf("%f",&cTemp);
    fTemp = (9.0/5.0)*cTemp + 32.0;
    printf("Fahrenheit: %.1f\n", fTemp);
    return 0;
}