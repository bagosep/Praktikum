#include <stdio.h>

using namespace std;

int main()
{
    float sisi,lpersegi,lbesar,r_kecil,lkecil;
    const float PHI=3.14;

    printf("Menghitung bidang\n");
    printf("Diketahui Sisi Persegi = ");
    scanf("%f",&sisi);

    lpersegi = sisi * sisi;
    lbesar   = (PHI * sisi * sisi) / 2;
    r_kecil  = sisi / 2;
    lkecil   = (PHI * r_kecil * r_kecil) / 2;

    printf("Luas Persegi = %.0f\n",lpersegi);
    printf("Setengah lingkaran = %.2f\n",lbesar);
    printf("Setengah lingkaran kecil = %.2f\n",lkecil);

    return 0;
}
