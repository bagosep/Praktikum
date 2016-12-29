#ifndef BAGOSEP_H_INCLUDED
#define BAGOSEP_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <conio.h>>
using namespace std;

int banyak(char text[50]){
    int banyak=0;
    for(int kounter=0; text[kounter]!='\0'; kounter++)
            {
        if(text[kounter]>='A' && text[kounter]<='z' || text[kounter]==' ')          //strlen
            {
            banyak++;
            }
        }
        return banyak;

}
void salin (char text2[50], char text[50]){
    int angka1;
    for(int kounter=0; kounter<=angka1; kounter++)
    {
        text2[kounter]=text[kounter];                           //strcpy
        if(text[kounter]=='\0'){
            text2[kounter]='\0';
        }
    }
}

void balikperkata(char text[50]){
    int kounter, i, j, kedua;
    int pertama=0,angka1;

    angka1=banyak(text);
    for(kounter=0; kounter<angka1; kounter++)
    {
            if(text[kounter]==' ' || kounter==angka1-1){
                kedua=kounter+1;                                           //Balik Per kata
                if(kounter==angka1-1){
                    cout<<" ";
                }
                j=0;
                for(i=pertama; i<kedua; i++){
                    cout<<text[kedua-1-j];
                    j++;
                    if(i==kedua-1){
                        pertama=kounter+1;
                    }
                }
            }
    }

}
void balik(char text[100]){
    int angka1;
    angka1=banyak(text);
    for(int kounter=0; kounter<=angka1; kounter++)
    {
        if(text[kounter]=='\0'){
            text[kounter]='\0';                            //strrev
        }
        cout<<text[angka1-kounter];
    }
}
void besarSemua(char text[100]){
    for(int kounter=0; text[kounter]!='\0'; kounter++)
    {
        if(text[kounter]>='A' && text[kounter]<='Z' || text[kounter]==' ')
        {
            cout<<text[kounter];                                                //Strupr
        }
        else if(text[kounter]>='a' && text[kounter]<='z')
        {
            text[kounter]=char(text[kounter]-32);
            cout<<text[kounter];
        }
    }
}
void kecilSemua(char text[100]){
    for(int kounter=0; text[kounter]!='\0'; kounter++)
    {
        if(text[kounter]>='A' && text[kounter]<='Z')
        {
            text[kounter]=char(text[kounter]+32);                               //Strlwr
            cout<<text[kounter];
        }
        else if(text[kounter]>='a' && text[kounter]<='z' || text[kounter]==' ')
        {
            cout<<text[kounter];
        }
    }
}
int UcaseTotal(char text[100]){
    int besar=0;
    for(int kounter=0;text[kounter]!='\0';kounter++){
        if (text[kounter]>='A' && text[kounter]<='Z'){
            besar++;

        }else if(text[kounter]==' '){                                   //UcaseTotal
            text[kounter]=' ';
        }

    }
    return besar;
}
int LcaseTotal(char text[100]){
    int kecil=0,besar=0;
    for(int kounter=0;text[kounter]!='\0';kounter++){
        if (text[kounter]>='A' && text[kounter]<='Z'){
                besar++;

        }else if(text[kounter]==' '){                                   //LcaseTotal
            text[kounter]=' ';
        }

        else{
            kecil++;
        }

    }
    return kecil;
}
void HideVokal(char text[50]){
    int angka1;
    angka1=banyak(text);
    for(int kounter=0;kounter<angka1;kounter++){
        if(text[kounter]=='A' || text[kounter]=='I' || text[kounter]=='U'||
        text[kounter]=='E' || text[kounter]=='O'||text[kounter]=='a' || text[kounter]=='i' || text[kounter]=='u'||
        text[kounter]=='e' || text[kounter]=='o'){                          //HideVokals
                text[kounter]=' ' ;
            }
        cout<<text[kounter];

    }
}
void HideKonsonan(char text[50]){
    int angka1=banyak(text);
    for(int kounter=0;kounter<angka1;kounter++){
        if(text[kounter]=='A' || text[kounter]=='I' || text[kounter]=='U'||
        text[kounter]=='E' || text[kounter]=='O'||text[kounter]=='a' || text[kounter]=='i' || text[kounter]=='u'||
        text[kounter]=='e' || text[kounter]=='o'){
                                                    //HideKonsonan
            }
        else {
            text[kounter]=' ' ;
        }
        cout<<text[kounter];

    }
}
void hitungKata(char text[50]){
    int angka,angka1;
    angka1=banyak(text);
    angka=0;
    for (int kounter=0;kounter<angka1;kounter++){
            if(text[kounter]==' '){
            angka++;
            cout<<endl;                                                  //HitungBanyakKata
            cout<<"Word # "<<angka+1<<" \t\t\t : ";}
            else{
                cout<<text[kounter];
            }
        }
}
int totalVokal(char text[50]){
    int vokal=0;
    for(int kounter=0;text[kounter]!='\0';kounter++){
        if(text[kounter]=='A' || text[kounter]=='I' || text[kounter]=='U'||
        text[kounter]=='E' || text[kounter]=='O'||text[kounter]=='a' || text[kounter]=='i' || text[kounter]=='u'||
        text[kounter]=='e' || text[kounter]=='o'){
            vokal++;
        }
    }
    return vokal;

}
int totalKonsonan(char text[50]){
    int konsonan=0;
    for(int kounter=0;text[kounter]!='\0';kounter++){
        if(text[kounter]=='A' || text[kounter]=='I' || text[kounter]=='U'||
        text[kounter]=='E' || text[kounter]=='O'||text[kounter]=='a' || text[kounter]=='i' || text[kounter]=='u'||
        text[kounter]=='e' || text[kounter]=='o' || text[kounter]==' '){
        }
        else {
            konsonan++;
        }
    }
    return konsonan;
}
int totalSpasi(char text[50]){
    int spas=0;
    for(int kounter=0;text[kounter]!='\0';kounter++){
        if(text[kounter]==' '){
            spas++;
        }

    }
    return spas;
}
void textOffset(char text[50], int offset){
    int ganti;
    for(int kounter=0; text[kounter]!='\0'; kounter++){
        if(text[kounter]==' '){
            text[kounter]=' ';
        }
        else{
            ganti=int(text[kounter])+offset;
            if(text[kounter]>='a' && text[kounter]<='z'){
                if(ganti<97){
                ganti=ganti+26;
            }
                else if(ganti>122){
                    ganti=ganti-26;
                }
            }
            else if(text[kounter]>='A' && text[kounter]<='Z'){
            if(ganti<65){
                ganti=ganti+26;
            }
            else if(ganti>90){
                ganti=ganti-26;
            }
        }
            text[kounter]=char (ganti);
        }
    }
    cout<<text;
}
#endif // BAGOSEP_H_INCLUDED
