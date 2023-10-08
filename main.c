#include <stdio.h>

int main(int argc, char *argv[]){
    int sec, hour, min, sec2;

    printf("input the second : ");
    scanf("%i", &sec);

    hour = sec / 60 / 60;
    min = (sec - hour * 3600) / 60;
    sec2 = sec % 60;

    printf("the time is %d : %d : %d", hour, min, sec2);
    return 0;
}
