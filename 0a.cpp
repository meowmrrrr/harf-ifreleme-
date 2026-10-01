#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
#include <sstream>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    while(1)
    {
        cout << "Ne yapmak istiyorsun?" << endl;
        cout << "1-Şifreli yazıyı çevirmek" << endl << "2-Normal yazıyı çevirmek" << endl << "3-Çıkış" << endl << endl;
        char cevap1;
        cin >> cevap1;
        switch(cevap1)
        {
            case '1':
            {
            cin.get();
            system("cls");
            string sifreYazi;
            string sifreDizi1[500];
            string sifreDizi2[500];
            int sayi1=0;
            cout << "Şifreli yazıyı yazınız: ";
            getline(cin,sifreYazi);
            stringstream ss(sifreYazi);
            string parca;
            while (getline(ss, parca, ' ')) 
            {
                if (parca != "") 
                {
                    sifreDizi1[sayi1] = parca;
                    sayi1++;
                }
            }

            for(int i=0;i<=sayi1;i++)
            {
                if(sifreDizi1[i]==".")
                sifreDizi2[i]="a";
                if(sifreDizi1[i]=="%.")
                sifreDizi2[i]="A";
                if(sifreDizi1[i]==",")
                sifreDizi2[i]="b";
                if(sifreDizi1[i]=="%,")
                sifreDizi2[i]="B";
                if(sifreDizi1[i]=="+")
                sifreDizi2[i]="c";
                if(sifreDizi1[i]=="%+")
                sifreDizi2[i]="C";
                if(sifreDizi1[i]=="-")
                sifreDizi2[i]="ç";
                if(sifreDizi1[i]=="%-")
                sifreDizi2[i]="Ç";
                if(sifreDizi1[i]=="!")
                sifreDizi2[i]="d";
                if(sifreDizi1[i]=="%!")
                sifreDizi2[i]="D";
                if(sifreDizi1[i]==";")
                sifreDizi2[i]="e";
                if(sifreDizi1[i]=="%;")
                sifreDizi2[i]="E";
                if(sifreDizi1[i]==":")
                sifreDizi2[i]="f";
                if(sifreDizi1[i]=="%:")
                sifreDizi2[i]="F";
                if(sifreDizi1[i]=="?")
                sifreDizi2[i]="g";
                if(sifreDizi1[i]=="%?")
                sifreDizi2[i]="G";
                if(sifreDizi1[i]=="(")
                sifreDizi2[i]="ğ";
                if(sifreDizi1[i]=="%(")
                sifreDizi2[i]="Ğ";
                if(sifreDizi1[i]==")")
                sifreDizi2[i]="h";
                if(sifreDizi1[i]=="%)")
                sifreDizi2[i]="H";
                if(sifreDizi1[i]=="/")
                sifreDizi2[i]="ı";
                if(sifreDizi1[i]=="%/")
                sifreDizi2[i]="I";
                if(sifreDizi1[i]=="<")
                sifreDizi2[i]="i";
                if(sifreDizi1[i]=="%<")
                sifreDizi2[i]="İ";
                if(sifreDizi1[i]=="..")
                sifreDizi2[i]="j";
                if(sifreDizi1[i]=="%..")
                sifreDizi2[i]="J";
                if(sifreDizi1[i]==",+")
                sifreDizi2[i]="k";
                if(sifreDizi1[i]=="%,+")
                sifreDizi2[i]="K";
                if(sifreDizi1[i]=="+!")
                sifreDizi2[i]="l";
                if(sifreDizi1[i]=="%+!")
                sifreDizi2[i]="L";
                if(sifreDizi1[i]=="-+")
                sifreDizi2[i]="m";
                if(sifreDizi1[i]=="%-+")
                sifreDizi2[i]="M";
                if(sifreDizi1[i]=="!(")
                sifreDizi2[i]="n";
                if(sifreDizi1[i]=="%!(")
                sifreDizi2[i]="N";
                if(sifreDizi1[i]==";/")
                sifreDizi2[i]="o";
                if(sifreDizi1[i]=="%;/")
                sifreDizi2[i]="O";
                if(sifreDizi1[i]==":,")
                sifreDizi2[i]="ö";
                if(sifreDizi1[i]=="%:,")
                sifreDizi2[i]="Ö";
                if(sifreDizi1[i]==".-")
                sifreDizi2[i]="p";
                if(sifreDizi1[i]=="%.-")
                sifreDizi2[i]="P";
                if(sifreDizi1[i]==",;")
                sifreDizi2[i]="r";
                if(sifreDizi1[i]=="%,;")
                sifreDizi2[i]="R";
                if(sifreDizi1[i]=="+?")
                sifreDizi2[i]="s";
                if(sifreDizi1[i]=="%+?")
                sifreDizi2[i]="S";
                if(sifreDizi1[i]=="-)")
                sifreDizi2[i]="ş";
                if(sifreDizi1[i]=="%-)")
                sifreDizi2[i]="Ş";
                if(sifreDizi1[i]=="!>")
                sifreDizi2[i]="t";
                if(sifreDizi1[i]=="%!>")
                sifreDizi2[i]="T";
                if(sifreDizi1[i]=="(.")
                sifreDizi2[i]="u";
                if(sifreDizi1[i]=="%(.")
                sifreDizi2[i]="U";
                if(sifreDizi1[i]==")/")
                sifreDizi2[i]="ü";
                if(sifreDizi1[i]=="%)/")
                sifreDizi2[i]="Ü";
                if(sifreDizi1[i]=="/?")
                sifreDizi2[i]="v";
                if(sifreDizi1[i]=="%/?")
                sifreDizi2[i]="V";
                if(sifreDizi1[i]=="<!")
                sifreDizi2[i]="y";
                if(sifreDizi1[i]=="%<!")
                sifreDizi2[i]="Y";
                if(sifreDizi1[i]=="//")
                sifreDizi2[i]="z";
                if(sifreDizi1[i]=="%//")
                sifreDizi2[i]="Z";
                if(sifreDizi1[i]=="<<")
                sifreDizi2[i]="x";
                if(sifreDizi1[i]=="%<<")
                sifreDizi2[i]="X";
                if(sifreDizi1[i]=="((")
                sifreDizi2[i]="w";
                if(sifreDizi1[i]=="%((")
                sifreDizi2[i]="W";
                if(sifreDizi1[i]=="))")
                sifreDizi2[i]="q";
                if(sifreDizi1[i]=="%))")
                sifreDizi2[i]="Q";
                if(sifreDizi1[i]=="??")
                sifreDizi2[i]="0";
                if(sifreDizi1[i]=="?.")
                sifreDizi2[i]="1";
                if(sifreDizi1[i]=="?,")
                sifreDizi2[i]="2";
                if(sifreDizi1[i]=="?+")
                sifreDizi2[i]="3";
                if(sifreDizi1[i]=="?-")
                sifreDizi2[i]="4";
                if(sifreDizi1[i]=="?!")
                sifreDizi2[i]="5";
                if(sifreDizi1[i]=="?;")
                sifreDizi2[i]="6";
                if(sifreDizi1[i]=="?:")
                sifreDizi2[i]="7";
                if(sifreDizi1[i]=="?(")
                sifreDizi2[i]="8";
                if(sifreDizi1[i]=="?)")
                sifreDizi2[i]="9";
                if(sifreDizi1[i]=="<>")
                sifreDizi2[i]=" ";
            }
            cout << "Şifreli yazı: ";
            for(int i=0;i<sayi1;i++)
            cout <<sifreDizi2[i];       
            cout << endl << endl;
            break;
            }
            case '2':
            {
                cin.get();
                system("cls");
                string sifreYazi;
                string sifreDizi1[500];
                string sifreDizi2[500];
                int sayi1=0;
                cout << "Normal yazıyı yazınız: ";
                getline(cin,sifreYazi);
                /*for(size_t harf: sifreYazi)
                {  
                    sifreDizi1[sayi1]=harf;
                    sayi1++;
                }*/

                for (size_t i = 0; i < sifreYazi.length(); )
                {
                    if (sifreYazi[i] < 0) 
                    {
                        sifreDizi1[sayi1] = sifreYazi.substr(i, 2);
                        i += 2;
                    }
                    else
                    {
                        sifreDizi1[sayi1] = string(1, sifreYazi[i]);
                        i += 1;
                    }
                    sayi1++;
                }

                for(int i=0;i<=sayi1;i++) // uzun kısım...
                {
                    if(sifreDizi1[i]=="a")
                    sifreDizi2[i]=".";
                    if(sifreDizi1[i]=="A")
                    sifreDizi2[i]="%.";
                    if(sifreDizi1[i]=="b")
                    sifreDizi2[i]=",";
                    if(sifreDizi1[i]=="B")
                    sifreDizi2[i]="%,";
                    if(sifreDizi1[i]=="c")
                    sifreDizi2[i]="+";
                    if(sifreDizi1[i]=="C")
                    sifreDizi2[i]="%+";
                    if(sifreDizi1[i]=="ç")
                    sifreDizi2[i]="-";
                    if(sifreDizi1[i]=="Ç")
                    sifreDizi2[i]="%-";
                    if(sifreDizi1[i]=="d")
                    sifreDizi2[i]="!";
                    if(sifreDizi1[i]=="D")
                    sifreDizi2[i]="%!";
                    if(sifreDizi1[i]=="e")
                    sifreDizi2[i]=";";
                    if(sifreDizi1[i]=="E")
                    sifreDizi2[i]="%;";
                    if(sifreDizi1[i]=="f")
                    sifreDizi2[i]=":";
                    if(sifreDizi1[i]=="F")
                    sifreDizi2[i]="%:";
                    if(sifreDizi1[i]=="g")
                    sifreDizi2[i]="?";
                    if(sifreDizi1[i]=="G")
                    sifreDizi2[i]="%?";
                    if(sifreDizi1[i]=="ğ")
                    sifreDizi2[i]="(";
                    if(sifreDizi1[i]=="Ğ")
                    sifreDizi2[i]="%(";
                    if(sifreDizi1[i]=="h")
                    sifreDizi2[i]=")";
                    if(sifreDizi1[i]=="H")
                    sifreDizi2[i]="%)";
                    if(sifreDizi1[i]=="ı")
                    sifreDizi2[i]="/";
                    if(sifreDizi1[i]=="I")
                    sifreDizi2[i]="%/";
                    if(sifreDizi1[i]=="i")
                    sifreDizi2[i]="<";
                    if(sifreDizi1[i]=="İ")
                    sifreDizi2[i]="%<";
                    if(sifreDizi1[i]=="j")
                    sifreDizi2[i]="..";
                    if(sifreDizi1[i]=="J")
                    sifreDizi2[i]="%..";
                    if(sifreDizi1[i]=="k")
                    sifreDizi2[i]=",+";
                    if(sifreDizi1[i]=="K")
                    sifreDizi2[i]="%,+";
                    if(sifreDizi1[i]=="l")
                    sifreDizi2[i]="+!";
                    if(sifreDizi1[i]=="L")
                    sifreDizi2[i]="%+!";
                    if(sifreDizi1[i]=="m")
                    sifreDizi2[i]="-+";
                    if(sifreDizi1[i]=="M")
                    sifreDizi2[i]="%-+";
                    if(sifreDizi1[i]=="n")
                    sifreDizi2[i]="!(";
                    if(sifreDizi1[i]=="N")
                    sifreDizi2[i]="%!(";
                    if(sifreDizi1[i]=="o")
                    sifreDizi2[i]=";/";
                    if(sifreDizi1[i]=="O")
                    sifreDizi2[i]="%;/";
                    if(sifreDizi1[i]=="ö")
                    sifreDizi2[i]=":,";
                    if(sifreDizi1[i]=="Ö")
                    sifreDizi2[i]="%:,";
                    if(sifreDizi1[i]=="p")
                    sifreDizi2[i]=".-";
                    if(sifreDizi1[i]=="P")
                    sifreDizi2[i]="%.-";
                    if(sifreDizi1[i]=="r")
                    sifreDizi2[i]=",;";
                    if(sifreDizi1[i]=="R")
                    sifreDizi2[i]="%,;";
                    if(sifreDizi1[i]=="s")
                    sifreDizi2[i]="+?";
                    if(sifreDizi1[i]=="S")
                    sifreDizi2[i]="%+?";
                    if(sifreDizi1[i]=="ş")
                    sifreDizi2[i]="-)";
                    if(sifreDizi1[i]=="Ş")
                    sifreDizi2[i]="%-)";
                    if(sifreDizi1[i]=="t")
                    sifreDizi2[i]="!>";
                    if(sifreDizi1[i]=="T")
                    sifreDizi2[i]="%!>";
                    if(sifreDizi1[i]=="u")
                    sifreDizi2[i]="(.";
                    if(sifreDizi1[i]=="U")
                    sifreDizi2[i]="%(.";
                    if(sifreDizi1[i]=="ü")
                    sifreDizi2[i]=")/";
                    if(sifreDizi1[i]=="Ü")
                    sifreDizi2[i]="%)/";
                    if(sifreDizi1[i]=="v")
                    sifreDizi2[i]="/?";
                    if(sifreDizi1[i]=="V")
                    sifreDizi2[i]="%/?";
                    if(sifreDizi1[i]=="y")
                    sifreDizi2[i]="<!";
                    if(sifreDizi1[i]=="Y")
                    sifreDizi2[i]="%<!";
                    if(sifreDizi1[i]=="z")
                    sifreDizi2[i]="//";
                    if(sifreDizi1[i]=="Z")
                    sifreDizi2[i]="%//";
                    if(sifreDizi1[i]=="x")
                    sifreDizi2[i]="<<";
                    if(sifreDizi1[i]=="X")
                    sifreDizi2[i]="%<<";
                    if(sifreDizi1[i]=="w")
                    sifreDizi2[i]="((";
                    if(sifreDizi1[i]=="W")
                    sifreDizi2[i]="%((";
                    if(sifreDizi1[i]=="q")
                    sifreDizi2[i]="))";
                    if(sifreDizi1[i]=="Q")
                    sifreDizi2[i]="%))";
                    if(sifreDizi1[i]=="0")
                    sifreDizi2[i]="??";
                    if(sifreDizi1[i]=="1")
                    sifreDizi2[i]="?.";
                    if(sifreDizi1[i]=="2")
                    sifreDizi2[i]="?,";
                    if(sifreDizi1[i]=="3")
                    sifreDizi2[i]="?+";
                    if(sifreDizi1[i]=="4")
                    sifreDizi2[i]="?-";
                    if(sifreDizi1[i]=="5")
                    sifreDizi2[i]="?!";
                    if(sifreDizi1[i]=="6")
                    sifreDizi2[i]="?;";
                    if(sifreDizi1[i]=="7")
                    sifreDizi2[i]="?:";
                    if(sifreDizi1[i]=="8")
                    sifreDizi2[i]="?(";
                    if(sifreDizi1[i]=="9")
                    sifreDizi2[i]="?)";
                    if(sifreDizi1[i]==" ")
                    sifreDizi2[i]="<>";
                }
                cout << "Normal yazı: ";
                for(int i=0;i<sayi1;i++)
                cout <<sifreDizi2[i] << " ";
                cout << endl << endl;
                /*cout << endl << endl << "geri gelmek için enter basın";
                cin.get();*/
                break;
                }
            case '3':
            return 0;
            default:
            cout << endl <<  "yanlış karakter girildi!";
            _sleep(1500);
            break;
        }
    }

    return 0;
}