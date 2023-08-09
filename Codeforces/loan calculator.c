
#include <stdio.h>

int main ()

{
    double loan_amount,interest_rate,number_of_year,total_amount,mounthly_amount;
    printf ("Enter the loan amount:");
    scanf ("%lf",&loan_amount);
    printf ("\nEnter the interest rate:");
    scanf ("%lf",&interest_rate);
    printf ("\nEnter the number of year:");
    scanf ("%lf",&number_of_year);

    total_amount = loan_amount + loan_amount * interest_rate / 100.00;
    mounthly_amount = total_amount/(number_of_year*12);
    printf ("\nTotal amount = %0.2lf",total_amount);
    printf ("\nMounthly_amount = %0.2lf",mounthly_amount);


    return 0;

}

