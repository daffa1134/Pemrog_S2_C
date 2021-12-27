#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1

void toBinary(int *input);
int checkBinary(int *input);
void toDecimal(int *input);

int main() {
    int input, selectMenu;
    // Menampilkan menu
    printf("====PROGRAM KONVERSI BILANGAN====\n");

    while (TRUE)
    {
        printf("1. Desimal ke Biner\n2. Biner ke Desimal\n3. Desimal ke Oktal\n4. Oktal ke Desimal\n5. Keluar\n");
        printf("Silahkan masukkan menu pilihan :\n");
        scanf("%d", &selectMenu);

        if (selectMenu == 1)
        {
            printf("##Masukkan bilangan desimal\n");
            scanf("%d", &input);
            if (input > 256)
            {
                printf("Inputan melebihi (2^8)\n");
                break;
            }

            else
            {
                toBinary(&input);
            }
            putchar('\n');
        }

        else if (selectMenu == 2)
        {
            printf("##Masukkan bilangan biner\n");
            scanf("%d", &input);
            
            // Cek inputan user, apakah dalam binari atau bukan. Jika iya, langsung di konversi
            if (checkBinary(&input) == EXIT_SUCCESS)
            {
                toDecimal(&input);
            }
            else
            {
                return EXIT_FAILURE;
            }

            putchar('\n');
        }

        else if (selectMenu == 3)
        {
            printf("##Masukkan bilangan desimal\n");
            scanf("%d", &input);
            printf("\nBilangan oktalnya adalah: %o", input);
            putchar('\n');
        }

        else if (selectMenu == 4)
        {
            printf("##Masukkan bilangan oktal\n");
            scanf("%o", &input);
            printf("\nBilangan desimalnya adalah : %d", input);
            putchar('\n');
        }

        else if (selectMenu == 5)
        {
            printf("Terima kasih sudah menggunakan program ini!!!\nHave a nice day\n");
            return EXIT_SUCCESS;
        }

        else
        {
            printf("Harap masukkan pilihan menu yang benar!!\n");
            return EXIT_FAILURE;
        }
        putchar('\n');
    }
    return EXIT_SUCCESS;
}

void toBinary(int *input) {
    int indexBinary[9] = {pow(2,0), pow(2,1), pow(2,2), pow(2,3), pow(2,4), pow(2,5), pow(2,6), pow(2,7), pow(2,8)};
    int Binary[9] = {0,0,0,0,0,0,0,0,0};
    
    for (int i = 8; i >= 0; i--)
    {
        while (*input >= indexBinary[i])
        {
            Binary[i] += 1;
            *input -= indexBinary[i];
        }
    }
    printf("\nBilangan binernya adalah : ");
    for (int i = 8; i >= 0; i--)
    {
        printf("%d", Binary[i]);
    }
}

int checkBinary(int *input){
    int sisa = 0, temp;

    temp = *input;

    while (temp != 0)
    {
        sisa = temp % 10;
        if (sisa == 0 || sisa == 1)
        {
            temp /= 10;
            if (temp == 0)
            {
                return EXIT_SUCCESS;
            }
        }
        else
        {
            printf("Harap masukkan bilangan biner yang benar!!\n");
            return EXIT_FAILURE;
        }   
    }
}

void toDecimal(int *input){
    int sisa, desimal = 0, i = 0;
    while (*input != 0)
    {
        sisa = *input % 10;
        *input /= 10;
        desimal += sisa * pow(2, i);
        i++;
    }
    printf("\nBilangan desimalnya adalah : %d", desimal);
}