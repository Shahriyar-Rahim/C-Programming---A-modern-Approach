#include<stdio.h>

int main()
{
    double loan, mntpy, rate, emi, balance;
    int n;

    printf("Enter the loan amount: ");
    scanf("%lf", &loan);
    printf("Enter the interest rate: ");
    scanf("%lf", &rate);
    printf("Enter the monthly installment: ");
    scanf("%lf", &mntpy);
    printf("Enter the number of payments: ");
    scanf("%d", &n);

    emi = (rate / 100.00) / 12.00;

    balance = loan;
    for(int i = 0; i < n; i++){
        balance = balance + ( balance * emi ) - mntpy;
        printf("Balance after %dth payment: %.2lf\n", i, balance);
    }

    return 0;
}
