//NAMA : FANDY ROHMAN SIFA AMINULLOH
//NIM : 202310370311241

#include <stdio.h>

int main() {
    double celsius, hasil;
    int choice;
    char lanjut;

    printf("Konversi Suhu dari Celsius\n");

    do {
        printf("Masukkan suhu dalam Celsius: ");
        scanf("%lf", &celsius);

        printf("Pilih unit konversi:\n");
        printf("1. Reamur\n");
        printf("2. Fahrenheit\n");
        printf("3. Kelvin\n");
        printf("Masukkan nomor unit konversi: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                hasil = 0.8 * celsius; // Konversi ke Reamur
                printf("%.2lf Celsius = %.2lf Reamur\n", celsius, hasil);
                break;
            case 2:
                hasil = (celsius * 9 / 5) + 32; // Konversi ke Fahrenheit
                printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, hasil);
                break;
            case 3:
                hasil = celsius + 273.15; // Konversi ke Kelvin
                printf("%.2lf Celsius = %.2lf Kelvin\n", celsius, hasil);
                break;
            default:
                printf("Pilihan tidak valid.\n");
                continue;
        }

        printf("Apakah Anda ingin mengkonversi suhu lainnya? (y/n): ");
        scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
