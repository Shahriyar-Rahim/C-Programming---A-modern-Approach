#include<stdio.h>

int main()
{
    float amount, tax_due;

    scanf("%f", &amount);

    if(amount < 750.00f)
        tax_due = .01f * amount;
    else if(amount < 2250.00f)
        tax_due = 7.50f + .02f * amount;
    else if(amount < 3750.00f)
        tax_due = 37.50f + .03f * amount;
    else if(amount < 5250.00f)
        tax_due = 82.50f + .04f * amount;
    else if(amount < 7000.00f)
        tax_due = 142.50f + .05f * amount;
    else
        tax_due = 230.00f + .06f * amount;

    printf("%.2f ", tax_due);


    return 0;
}
