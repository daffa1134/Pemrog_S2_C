// Program untuk enkripsi dan dekripsi file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE * fptr;
    // char get untuk mencopy string, file untuk inputan nama file
    char get[5000], file[20];
    char * pget = get;
    int i, index, count;

    printf("====Selamat datang di program enkripsi-dekripsi file sederhana!!====\n");
    printf("\nSilahkan masukkan menu: \n");
    printf("1. Enkripsi\n2. Dekripsi\n\n");
    scanf("%d", &index);

    if (index == 1)
    {
        printf("Masukkan nama file teks yang ingin dienkripsikan, lengkap dengan ekstensinya!! (e.g : data.txt)\n");
        scanf("%s", file);

        fptr = fopen(file, "r+");

        if (fptr == NULL)
        {
            printf("File tersebut tidak ada\n");
            return EXIT_FAILURE;
        }
    
        else
        {
            // Mengambil isi teks dari file tertentu
            fscanf(fptr, "%[^\n]s", get);
            // Memulai pointer dari awal file lagi
            rewind(fptr);
            // Menghitung jumlah string
            count = strlen(get);
            // Mengenkripsikan string dengan meloncat urutan setiap kata
            for (i = 0; i < count; i++)
            {
                *pget+=7;
                pget++;
            }
            // Menulis kembali pada file inputan
            fprintf(fptr,"%s", get);
            printf("\nIsi file berhasil dienkripsikan\n");
            printf("Silahkan membuka file untuk melihat hasilnya\n");
            fclose(fptr);
        }        
    }
    
    else if (index == 2)
    {
        printf("Masukkan nama file teks yang ingin didekripsikan, lengkap dengan ekstensinya!! (e.g : data.txt)\n");
        scanf("%s", file);

        fptr = fopen(file, "r+");

        if (fptr == NULL)
        {
            printf("File tersebut tidak ada\n");
            return EXIT_FAILURE;
        }
        
        else
        {
            // Mengambil isi teks dari file tertentu
            fscanf(fptr, "%[^\n]s", get);
            // Memulai pointer dari awal file lagi
            rewind(fptr);
            // Menghitung jumlah string
            count = strlen(get);
            // Menhdekripsikan string dengan mundur urutan dari setiap kata
            for (i = 0; i < count; i++)
            {
                *pget-=7;
                pget++;
            }
            // Menulis kembali pada file inputan
            fprintf(fptr,"%s", get);
            printf("\nIsi file berhasil di dekripsikan\n");
            printf("Silahkan membuka file untuk melihat hasilnya\n");
            fclose(fptr);
        }
    }

    else
    {
        printf("Harap masukkan pilihan menu yang benar!!");
    }
    
    printf("By : Daffa Mudhaffar\n");
    return EXIT_SUCCESS;
}
