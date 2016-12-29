#include <iostream>

using namespace std;

int main()
{
    int baris,kolom,slash;

                cout<<"Masukan Banyak nya slash = ";cin>>slash;

                slash=slash*3;

                for(baris=1;baris<=slash/3;baris++){
                for(kolom=1;kolom<=slash;kolom++)

                cout<<((kolom==slash/3-baris+1) || (kolom==slash-baris+1)?
                 "/" : (kolom==slash/3+baris)? "\\" : " ");
                cout<<endl;
                }

    return 0;
}
