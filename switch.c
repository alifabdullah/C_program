#include<stdio.h>
int main(){
    int day;//
    
    printf("enterday(1-7):");
    scanf("%d",&day);
    switch (day)
    {
    case 1 :
        printf("Monday\n");
        break;
    case 2 :
        printf("tuesday\n");
        break;
    case 3 :
        printf("wednesday\n");
        break;
    case 4 :
        printf("thursday\n");
        break;
    case 5 :
        printf("friday\n");
        break;
    case 6 :
        printf("saturday\n");
        break;
    
    default: printf("not a valid day");
        break;
    }
    
    return 0;
}