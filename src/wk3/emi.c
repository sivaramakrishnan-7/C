#include <stdio.h>
#include <math.h>
int main(){

    double principal, annualRate, monthlyRate, monthlyPayment;
    int numMonths;

    scanf("%lf", &principal);
    scanf("%lf", &annualRate);
    scanf("%d", &numMonths);

    monthlyRate = annualRate /(12 *100);
    monthlyPayment = (principal * monthlyRate*(pow((1 + monthlyRate),numMonths))) / ((pow((1 + monthlyRate),numMonths)) - 1);
    printf("%.0lf", monthlyPayment);
    return 0;
}