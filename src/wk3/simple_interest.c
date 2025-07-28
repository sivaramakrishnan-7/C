#include <stdio.h>

int main(){
    double principal;
    double rate;
    double time; 

    scanf("%lf", &principal);
    scanf("%lf",&rate);
    scanf("%lf",&time);

    double simpleInterest = (principal * rate * time)/100;
    printf("%.2lf\n", simpleInterest);
    return 0;

}