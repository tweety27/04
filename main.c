#include <stdio.h>

int main(int argc, char *argv[]){
    int a, b;
    int res1, res2, res3, res4, res5;

    printf("input two integers : ");
    scanf("%d %d", &a, &b);

    res1 = a + b;
    printf("+ result is %d \n", res1);

    res2 = a - b;
    printf("- result is %d \n", res2);
    
    res3 = a * b;
    printf("* result is %d \n", res3);
    
    res4 = a / b;
    printf("/ result is %d \n", res4);
    
    res5 = a % b;
    printf("%% result is %d \n", res5);
    
    return 0;
}
