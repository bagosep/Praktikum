#include "bagosep.h"

int main()
{
    char text[50];
    char text2[50];
    char text3[50];
    int exitmenu1;
    int  tambahOffset;
    int operatorku;
    int angka1;

    cout<<"\nInput Text\t\t\t : ";
    cin.sync();
    cin.getline(text, 50);
    system("CLS");
    do{
    cout<<endl;
    cout<<"Text Yang Di Input \t\t : "<<text;
    cout<<endl;
    cout<<endl;
    cout<<"Opsi Pilihan \t\t\t \n ";
    cout<<"\n1. Bolak-Balik Kata \n2. Besar Kecil Kata \n3. Vokal,!Vokal,Spaces ";
    cout<<"\n4. Hide Vokal dan !vokal \n5. Kata Ke \n6. Input Offset Text \n7. Exit\n\n";
    cout<<"Pilihan Anda \t\t\t : ";cin>>operatorku;
    cout<<endl;
    angka1=banyak(text);
    salin(text2, text);
    switch (operatorku){
    case 1:
    salin(text2, text);
    cout<<endl;
    cout<<"Reserved /w text\t\t :";balikperkata(text2);
    cout<<endl;
    cout<<"Original\t\t\t : "<<text<<endl;
    cout<<"Reserved\t\t\t :";balik(text2);
    cout<<endl;
    getch();
    break;
    case 2:
    salin(text2, text);
    cout<<"Uppercase\t\t\t : ";besarSemua(text2);
    cout<<endl;
    cout<<"Lowercase\t\t\t : ";kecilSemua(text2);
    cout<<endl;
    cout<<"Ucase Total\t\t\t : "<<UcaseTotal(text);
    cout<<endl;
    cout<<"Lcase Total\t\t\t : "<<LcaseTotal(text);
    cout<<endl;
    getch();
    break;
    case 3:
    cout<<endl;
    cout<<"Vocals\t\t\t\t : "<<totalVokal(text)<<endl;
    cout<<"!Vocals\t\t\t\t : "<<totalKonsonan(text)<<endl;
    cout<<"Spaces\t\t\t\t : "<<totalSpasi(text)<<endl;
    getch();
    break;
    case 4:
        salin(text3, text);
        salin(text2, text);
        cout<<"Hide Vocal\t\t\t : ";HideVokal(text2);
        cout<<endl;
        cout<<"Hide !Vocals\t\t\t : ";HideKonsonan(text3);
        getch();
        break;
    case 5:
      salin(text2, text);
      cout<<"Word # 1\t\t\t : ";hitungKata(text2);
      getch();
    break;
    case 6:
        cout<<"Input Offset\t\t\t : ";cin>>tambahOffset;
    salin(text2, text);
    cout<<"Offset Text\t\t\t : ";textOffset(text, tambahOffset);
    getch();
    break;
    case 7 :
    break;
    default :
        cout<<"Menu sampai 7 ";
        getch();
        break;
    }
    cout<<endl;
    cout<<endl;
    system("CLS");
    }while(operatorku!=7);
    return 0;
}
