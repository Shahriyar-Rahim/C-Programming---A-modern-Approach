#include<stdio.h>

int main()
{
    int md, wd;

    printf("Enter number of days in month: ");
    scanf("%d", &md);
    printf("Enter starting day of the week (1=sun, 7=sat): ");
    scanf("%d",&wd);

    for(int i = 1; i < wd; i++)
        printf("   ");

    for(int i = 1; i <= md; i++){
        printf("%02d ", i);

        if((i + wd - 1) % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}
