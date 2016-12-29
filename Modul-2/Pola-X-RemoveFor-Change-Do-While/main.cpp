#include <iostream>

using namespace std;

int main()
{
    int baris,kolom,slash;
    do{
                cout<<"Masukan Banyak nya slash = ";cin>>slash;

                slash=slash*2;

                baris = 1;
                while (baris<=slash){
                 kolom = 1;
                    do{
                    cout<<( (kolom==baris)? "\\" : (kolom==slash-baris+1)? "/" : " ");
                    kolom++;
                    }
                    while(kolom<=slash);
                    cout<<endl;
                    baris++;

                }
            }while(slash);

    return 0;
}
