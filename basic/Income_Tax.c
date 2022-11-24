#include<stdio.h>
#include<conio.h>
int main ()
{
    int income;
    printf("If you want to know how much tax you need to pay \nEnter your income\n");
    scanf("%d",&income);

    if(income<500000)
    printf("Ha ha ha You are tax free\n");

    else if(income < 750000)
    printf("You need to pay a tax of %f",12500+(income-500000)*0.1);

    else if (income < 1000000)
    printf("You need to pay tax of %f",12500+25000+(income-750000)*0.15);

    else if (income < 1250000)
    printf("You need to pay tax of %f",12500+25000+37500+(income-1000000)*0.20);

    else if (income < 1500000)
    printf("You need to pay tax of %f",12500+25000+37500+50000+(income-1250000)*0.25);

    else if (income >= 1500000)
    printf("You need to pay tax of %f",12500+25000+37500+50000+62500+(income-1500000)*0.30);

    getch();
    return -1;
}
