#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char text[50];
    char text2[50];
    char text3[50];
    char ganti2;
    char hilang[50];
    int besar=0,kecil=0,kounter,vokal=0;
    int bvokal=0,spas2=0,offset,ganti;

    cout<<"Input Text\t\t: ";cin.getline(text, 50);
    strcpy(text2, text);
    cout<<endl;
    cout<<"Hilangkan karakter\t: ";cin.getline(hilang, 50);
    for(int kounter1=0; hilang[kounter1]!='\0';kounter1++){
        for(int kounter=0;text2[kounter]!='\0';kounter++){
        if(text2[kounter]==hilang[kounter1]){
            text2[kounter]=' ';
            }
        }
    }
    cout<<endl;
    cout<<"Jadi Nya \t\t: "<<text2;
    cout<<endl;
    cout<<"Original\t\t: "<<text<<endl;
    strcpy(text2, text);
    cout<<"Reserved\t\t: "<<strrev(text2)<<endl;
    strcpy(text2, text);
    cout<<endl;
    cout<<"Uppercase\t\t: "<<strupr(text2)<<endl;
    cout<<"Lowercase\t\t: "<<strlwr(text2)<<endl;
    cout<<endl;
    strcpy(text2, text);
    for(kounter=0;kounter<strlen(text2);kounter++){
        if (text2[kounter]>='A' && text2[kounter]<='Z'){
            besar++;
        }else if(text2[kounter]==' '){
            text2[kounter]=' ';
        }
        else{
            kecil++;
        }

    }
    cout<<"Ucase Total\t\t: "<<besar<<endl;
    cout<<"Lcase Total\t\t: "<<kecil;
    cout<<endl;
    strcpy(text3, text);
    strcpy(text2, text);
    for(kounter=0;kounter<strlen(text);kounter++){
        if(text[kounter]=='A' || text[kounter]=='I' || text[kounter]=='U'||
        text[kounter]=='E' || text[kounter]=='O'||
        text[kounter]=='a' || text[kounter]=='i' || text[kounter]=='u'||
        text[kounter]=='e' || text[kounter]=='o'){
            vokal++;
            text2[kounter]=' ' ;}
        else if (text[kounter]==' '){
            spas2++;
        }
        else{
            bvokal++;
            text3[kounter]=' ';}
        }
    cout<<endl;
    cout<<"Vocals\t\t\t: "<<vokal<<endl;
    cout<<"!Vocals\t\t\t: "<<bvokal<<endl;
    cout<<"Spaces\t\t\t: "<<spas2<<endl;
    cout<<endl;
    cout<<"Hide Vocal\t\t: "<<text2<<endl;
    cout<<"Hide !Vocals\t\t: "<<text3<<endl;
    cout<<endl;

    cout<<"Input Offset\t\t: ";cin>>offset;
    strcpy(text2, text);
    for(kounter=0; text[kounter]!='\0'; kounter++){
        if(text[kounter]==' '){
            text[kounter]=' ';
        }
        else{
            ganti=int(text2[kounter])+offset;
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
    cout<<"Offset Text\t\t: "<<text;
    cout<<endl;
    return 0;
}
