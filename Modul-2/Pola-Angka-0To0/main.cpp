#include <iostream>

using namespace std;

int main()
{
    int baris,kolom,angka;
    cout<<"Masukan Banyak nya angka = ";
    cin>>angka;


    for(baris=1; baris<=angka+4; baris++)
    {
        for(kolom=1; kolom<=angka+4; kolom++){

        /*b1 = (baris==1) || (kolom==1) || (kolom==angka+4) || (baris==angka+4);
        b2 = (baris==2) || (kolom==2) || (baris==angka+3) || (kolom==angka+3);*/

        if ((baris==1) || (kolom==1) || (kolom==angka+4) || (baris==angka+4))
        {
            cout<<"# ";
        }
        else if ((baris==2) || (kolom==2) || (baris==angka+3) || (kolom==angka+3))
        {
            cout<<"  ";
        }

        else
        {

            cout<<(baris-2)%10<<" ";
        }
        }
        cout<<endl;
    }

    return 0;
}
