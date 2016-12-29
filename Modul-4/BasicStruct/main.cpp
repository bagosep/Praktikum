#include "bagos.h"

int main()
{
    int banyak_mhs;
    cout<<"Masukan Banyak Mahasiswa\t = ";cin>>banyak_mhs;
    cout<<endl;
    for(int kounter=0;kounter<banyak_mhs;kounter++){
        cout<<"Masukan Nama Mahasiswa "<<kounter+1<<"\t = ";
        cin>>mahasiswa.nama;
        cout<<"Masukan NPM Mahasiswa "<<kounter+1<<"\t\t = ";
        cin>>mahasiswa.npm;
        cout<<"Masukan Tanggal Lahir Mahasiswa "<<kounter+1<<"= ";
        cin>>mahasiswa.tgl_lahir;
        cout<<"Masukan Umur Mahasiswa "<<kounter+1<<" \t = ";
        cin>>mahasiswa.umur;
        cout<<"Masukan Jenis Kelamin Mahasiswa "<<kounter+1<<"= ";
        cin>>mahasiswa.jk;
        cout<<endl;
    }
    cout<<endl;
    for(int kounter=0;kounter<banyak_mhs;kounter++){
        cout<<"Nama Mahasiswa\t"<<kounter+1<<"\t = "<<mahasiswa.nama<<endl;
        cout<<"NPM Mahasiswa\t"<<kounter+1<<"\t = "<<mahasiswa.npm<<endl;
        cout<<"Tanggal Lahir Mahasiswa\t"<<kounter+1<<"= "<<mahasiswa.tgl_lahir<<endl;
        cout<<"Umur Mahasiswa \t"<<kounter+1<<"\t = "<<mahasiswa.umur<<endl;
        cout<<"Jenis Kelamin Mahasiswa "<<kounter+1<<"= "<<mahasiswa.jk<<endl;
        cout<<endl;
    }
    return 0;
}
