#include<stdio.h>

int main()
{
    int n, sq;

    scanf("%d", &n);

    for(int i = 1; i < n; i++)
    {
        if(i % 2 == 0)
        {
            sq = i * i;

            if(sq > n)
                break;
            printf("%d\n", sq);
        }
    }


    return 0;
}
