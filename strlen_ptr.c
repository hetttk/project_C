#include <stdio.h>
int main(){
    char s[200]; int Lx=0; char *px;
    printf("Enter any string: ");
    fgets(s,200,stdin);
    px=s; while(*px!='\0' && *px!='\n'){ Lx++; px++; }
    printf("The length of a string is: %d\n", Lx);
    return 0;
}