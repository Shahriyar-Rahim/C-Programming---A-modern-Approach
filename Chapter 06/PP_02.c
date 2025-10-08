#include<stdio.h>

int main()
{
    int m, n, temp;

    scanf("%d %d", &m, &n);

    int a = m;
    int b = n;

    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d", a);


    return 0;
}
