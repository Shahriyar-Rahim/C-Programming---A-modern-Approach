#include<stdio.h>

int main()
{
    int f;
    printf("Enter the force: ");
    scanf("%d", &f);

    if( f < 1)
        printf("Calm");
    else if( f <= 3 )
        printf("Light air");
    else if( f <= 27)
        printf("Breeze");
    else if( f <= 47)
        printf("Gale");
    else if( f <= 63)
        printf("Storm");
    else if( f > 63)
        printf("Hurricane");


    return 0;
}
