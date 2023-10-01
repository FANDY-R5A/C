//NAMA : FANDY ROHMAN SIFA AMINULLOH 
//NIM : 202310370311241

#include <stdio.h>

int main() {
    int choice;
    double result = 0, angka1, angka2;
    char lanjut;

    printf("Selamat datang di Kalkulator Sederhana C\n");

    do {
        printf("Pilih operasi matematika:\n");
        printf("1. Penjumlahan (+)\n");
        printf("2. Pengurangan (-)\n");
        printf("3. Perkalian (*)\n");
        printf("4. Pembagian (/)\n");
        printf("0. Keluar\n");
        printf("Masukkan nomor operasi yang diinginkan: ");
        scanf("%d", &choice);

        if (choice != 0) {
            printf("Masukkan angka pertama: ");
            scanf("%lf", &angka1);

            printf("Masukkan angka kedua: ");
            scanf("%lf", &angka2);

            switch (choice) {
                case 1:
                    result = angka1 + angka2;
                    printf("Hasil penjumlahan: %.2lf\n", result);
                    break;
                case 2:
                    result = angka1 - angka2;
                    printf("Hasil pengurangan: %.2lf\n", result);
                    break;
                case 3:
                    result = angka1 * angka2;
                    printf("Hasil perkalian: %.2lf\n", result);
                    break;
                case 4:
                    if (angka2 != 0) {
                        result = angka1 / angka2;
                        printf("Hasil pembagian: %.2lf\n", result);
                    } else {
                        printf("Pembagian nol tidak diperbolehkan.\n");
                    }
                    break;
                default:
                    printf("Pilihan tidak valid.\n");
                    break;
            }

            // Tanyakan kepada pengguna apakah ingin melanjutkan
            printf("Apakah Anda ingin melanjutkan? (y/n): ");
            scanf(" %c", &lanjut);
        } else {
            // Jika pengguna memilih 0 (keluar), keluar dari loop
            break;
        }

    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
