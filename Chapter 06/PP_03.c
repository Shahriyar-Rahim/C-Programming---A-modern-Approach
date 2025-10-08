#include<stdio.h>

int main()
{
    int m, n, temp, l_term1, l_term2;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    int a = m;
    int b = n;

    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }

    l_term1 = m / a;
    l_term2 = n / a;

    printf("The lowest term is: %d/%d", l_term1, l_term2);

    return 0;
}
