#include <stdio.h>
int main(){
    int point; char gchar;
    printf("Enter score: "); scanf("%d",&point);
    gchar = (point>=90)?'A':(point>=75)?'B':(point>=60)?'C':(point>=45)?'D':(point>=33)?'E':'F';
    if(gchar=='A'||gchar=='B'||gchar=='C'||gchar=='D'||gchar=='E')
        printf("Your grade is %c. Congratulations! You are eligible for the next level.\n", gchar);
    else
        printf("Your grade is %c. Please try again next time.\n", gchar);
    return 0;
}