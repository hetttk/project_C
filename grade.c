#include <stdio.h>
int main(){
    int point; char gchar;
    printf("Enter score out of 100: ");
    scanf("%d",&point);
    gchar = (point>=90)?'A':(point>=75)?'B':(point>=60)?'C':(point>=45)?'D':(point>=33)?'E':'F';
    printf("Your grade is %c\n", gchar);
    return 0;
}