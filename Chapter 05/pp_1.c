#include<stdio.h>

int main()
{
    int num;
    printf("Enter the num: ");

    if(scanf("%d", &num) != 1){
        printf("Not a number");
        return 0;
    }

    if (num < 0 )
        num = -num;

    if( num <= 9)
        printf("The number %d has 1 digit", num);
    else if( num <= 99)
        printf("The number %d has 2 digit", num);
    else if( num <= 999)
        printf("The number %d has 3 digit", num);
    else
        printf("Not in range");


    return 0;
}
