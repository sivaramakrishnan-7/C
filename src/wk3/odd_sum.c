#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int sum = 0;
    int count = 0;

    for (int i = 0; count < n; i++){
        if (i % 2 != 0){
            sum = sum + i;
            count = count + 1;
        }
    }
    printf("%d\n", sum);
    return 0;

}