#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[20], reverse[20];
    int result = 0, loop, index = 0;

    printf("Input kata : ");
    scanf("%s", input);
    // Menghitung banyaknya perulangan yang dibutuhkan
    loop = strlen(input);
    // Membalik kata dari kanan ke kiri dan di tempatkan pada variabel reverse
    for (int i = loop-1; i >= 0; i--)
    {
        reverse[index]=input[i];
        index++;
    }
    // Membandingkan kedua kata
    result = strcmp(reverse, input);

    printf("Palindrom : ");
    if (result == 0)
    {
        printf("Benar, kata \"%s\" merupakan palindrom\n", input);
    }
    else
    {
        printf("Salah, kata \"%s\" bukan merupakan palindrom\n", input);
    }

    return EXIT_SUCCESS;
}