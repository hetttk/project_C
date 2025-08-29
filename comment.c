#include <stdio.h>
int main(){
    int point; char gchar;
    printf("Enter score: "); scanf("%d",&point);
    gchar = (point>=90)?'A':(point>=75)?'B':(point>=60)?'C':(point>=45)?'D':(point>=33)?'E':'F';
    printf("Your grade is %c. ", gchar);
    switch(gchar){
        case 'A': printf("Excellent work!\n"); break;
        case 'B': printf("Well done!\n"); break;
        case 'C': printf("Good job!\n"); break;
        case 'D': printf("You passed, but do better.\n"); break;
        case 'E': printf("You passed. Try harder.\n"); break;
        default: printf("Sorry, you failed.\n");
    }
    return 0;
}