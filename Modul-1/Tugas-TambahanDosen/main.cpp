#include <stdio.h>

using namespace std;

int main()
{
    float sisi,lpersegi,lbesar,r_kecil,lkecil,persegibesar,lkecil2,diarsir;
    const float PHI=3.14;

    printf("Menghitung bidang\n");
    printf("Diketahui Sisi Persegi = ");
    scanf("%f",&sisi);

    lpersegi = sisi * sisi;
    lbesar   = (PHI * sisi * sisi) / 2;
    r_kecil  = sisi / 2;
    lkecil   = (PHI * r_kecil * r_kecil) / 2;
    lkecil2  = (PHI * r_kecil * r_kecil) / 2;
    persegibesar = sisi * 2 * sisi * 2;
    diarsir  = persegibesar - (lpersegi + lbesar + lkecil + lkecil2);


    printf("Luas Persegi = %.0f\n",lpersegi);
    printf("Setengah lingkaran = %.2f\n",lbesar);
    printf("Setengah lingkaran kecil = %.2f\n",lkecil);
    printf("Setengah lingkaran kecil 2 = %.2f\n",lkecil2);
    printf("Bangun Yang diarsir  = %.2f\n",diarsir);


    return 0;
}
