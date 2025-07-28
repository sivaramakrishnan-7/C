#include <stdio.h>

int main(){
    int input, term1, term2, term3, term4, sum;
    scanf("%d",&input);
    sum = 0;
    term1 = input / 1000;
    term2 = (input / 100)%10;
    term3 = (input /10)%10;
    term4 = input % 10;

    sum = term1 + term2 + term3 + term4;
    printf("sum:%d, t1:%d, t2:%d, t3:%d, t4:%d", sum, term1, term2, term3, term4);
    return 0;
}