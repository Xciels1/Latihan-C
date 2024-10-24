#include <stdio.h>
#include <math.h>

//untuk menghitung luas segitiga sama kaki
float hitung_luas(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

//menghitung keliling segitiga sama kaki
float hitung_keliling(float alas, float tinggi) {
    float setengah_alas = alas / 2;
    float sisi_miring = sqrt(pow(setengah_alas, 2) + pow(tinggi, 2));
    return 2 * sisi_miring + alas;
}

int main() {
    float alas, tinggi, luas, keliling;

    // panjang alas dan tinggi
    printf("Masukkan panjang alas: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);

    // luas dan keliling
    luas = hitung_luas(alas, tinggi);
    keliling = hitung_keliling(alas, tinggi);

    // hasil
    printf("Luas segitiga: %.2f\n", luas);
    printf("Keliling segitiga: %.2f\n", keliling);

    return 0;
}
