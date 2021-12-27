#include <stdio.h>

int main() {
    char *bulan[12] = {"JANUARI", "FEBRUARI", "MARET", "APRIL", "MEI", "JUNI", "JULI", "AGUSTUS", "SEPTEMBER", "OKTOBER", "NOVEMBER", "DESEMBER"};
    int hari[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int inputTahun, inputBulan;

    printf("Masukkan tahun: ");
    scanf("%d", &inputTahun);
    printf("Masukkan bulan: ");
    scanf("%d", &inputBulan);

    //Tahun Kabisat
    if(((inputTahun % 400 != 0 && inputTahun %100 !=100) && inputTahun % 4 == 0) || (inputTahun % 400 == 0)) {
        printf("Tahun %d adalah TAHUN KABISAT\n", inputTahun);
        printf("Jumlah hari pada bulan %s adalah %d hari\n", bulan[inputBulan-1], hari[inputBulan-1]);
    } 
    else {
        printf("Tahun %d BUKAN TAHUN KABISAT\n", inputTahun);
        if (inputBulan == 2) {
            printf("Jumlah hari pada bulan %s adalah %d hari\n", bulan[inputBulan-1], hari[inputBulan-1]-1);
        }
        else {
            printf("Jumlah hari pada bulan %s adalah %d hari\n", bulan[inputBulan-1], hari[inputBulan-1]);
        }
    }
    return 0;
}