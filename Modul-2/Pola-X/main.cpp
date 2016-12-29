#include <iostream>

using namespace std;

int main()
{
    int baris,kolom,slash;

                cout<<"Masukan Banyak nya slash = ";cin>>slash;

                slash=slash*2;

                for(baris=1;baris<=slash;baris++){
                for(kolom=1;kolom<=slash;kolom++)

                    if (kolom==baris){
                        cout<<"\\";
                    }
                    else if(kolom==slash-baris+1){
                        cout<<"/";
                    }
                    else {
                        cout<<" ";
                    }
                    cout<<endl;
                    }


    return 0;
}
