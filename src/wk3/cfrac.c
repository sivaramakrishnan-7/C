#include <stdio.h>

int main(){
    double x; 
    
    scanf("%lf", &x);
    double cfrac = x;
    for(int i = 0;i < 5; i++){
        cfrac = x + (1.0 / cfrac);
    }
    printf("%.2lf", cfrac);
}