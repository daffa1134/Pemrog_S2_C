#include <stdio.h>

int main () {
    int nominal[15] = {1, 5, 10, 50, 100, 200, 500, 1000, 2000, 5000, 10000, 20000, 50000, 100000, 500000};
    int sum[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int input;

    printf("Jumlah uang: ");
    scanf("%d", &input);

    for (int i = 14; i >= 0 ; i--) {
        while (input >= nominal[i]) {
            sum[i]+=1;
            input-=nominal[i];
        }
    }

    printf("---------------------------------\n");
    printf("Pecahan\t\t\tJumlah\n");
    printf("---------------------------------\n");

    for (int i = 14; i >= 0; i--) {
        printf("%6d\t\t\t%4d\n", nominal[i], sum[i]);
    }
    return 0;
}