#include <stdio.h>
#include <stdlib.h>
#define N 7500

int main(){
    int angka[N], prima[1000];
    int n, index = 0, faktor = 0;
    printf("Masukkan nilai n : \n");
    scanf("%d", &n);
    // Isi array dengan bilangan
    for (int i = 0; i < N; i++)
    {
        angka[i] = i+1;
    }
    // Membagi bilangan, jika faktornya ada dua maka bilangan itu adalah bilangan prima
    for (int i = 0; i < N; i++)
    {
        faktor = 0;
        for (int j = 0; j < N; j++)
        {
            if (angka[i]%angka[j] == 0)
            {
                faktor++;
            }
        }

        if (faktor == 2)
        {
            prima[index]=angka[i];
            index++;
        }
    }

    printf("Bilangan prima : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", prima[i]);
    }
    putchar('\n');

    return EXIT_SUCCESS;
}