#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int main() {
    int array[N];
    int modus, jumlahModus = 0, temp, sum = 0;
    float rerata;
    // Deklarasi srand(time(0)) agar angka random yang dihasilkan selalu berbeda
    srand(time(0));
    // Mengisi array dengan kumpulan angka random antara 1 sampai 150
    for (int i = 0; i < N; i++)
    {
        array[i] = (rand() % 150) + 1;
    }
    // Mengurutkan isi array
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    // Mencari jumlah dari isi array
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    // Mencari rata-rata
    rerata = (float) sum / (float) N;
    // Mencari modus dari array
    for (int i = 0; i < N; i++)
    {
        int modusTemp = 0;
        for (int j = 0; j < N; j++)
        {
            if (array[j] == array[i])
            {
                modusTemp++;
            }
            if (modusTemp > jumlahModus)
            {
                jumlahModus = modusTemp;
                modus = array[i];
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%3d ", array[i]);
    }

    printf("\nModus = %d, dengan jumlah data %d\n", modus, jumlahModus);
    printf("Jumlah data adalah %d dengan rata-rata %f", sum, rerata);

    putchar('\n');

    return EXIT_SUCCESS;
}