#include <stdio.h>

using namespace std;

int main()
{
    float sisi;

    printf("Menghitung bidang\n");
    printf("Diketahui` Sisi Persegi = ");
    scanf("%f",&sisi);

    printf("Luas Persegi = %.0f\n",sisi * sisi);
    printf("Setengah lingkaran = %.2f\n",(3.14* sisi * sisi) / 2);
    printf("Luas Persegi = %.2f\n",(3.14 * sisi/2 * sisi/2) / 2);


    return 0;
}
