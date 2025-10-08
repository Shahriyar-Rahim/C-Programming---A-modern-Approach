#include<stdio.h>

int main()
{
    float a;

    float largest = -1;

    while(1){
        printf("Enter a number: ");
        scanf("%f", &a);
        if( a <= 0)
            break;

        if(largest < a)
            largest = a;
    }

    if( largest > 0)
        printf("%.2f", largest);
    else
        printf("No zero or nonnegative numbers were entered");


    return 0;
}
