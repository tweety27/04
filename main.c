#include <stdio.h>

int main(int argc, char *argv[]){
    int sec, min, sec2;

    printf("input the second : ");
    scanf("%i", &sec);

    min = sec / 60;
    sec2 = sec % 60;

    printf("the time is %d : %d", min, sec2);
    return 0;
}
