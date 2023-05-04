#include <iostream>
using namespace std;

void filltab (int tab[]) {     //funkcja, która będzie nam zapełniać pola w tablicy tab1
    for(int i=0; i<20; i++){
        if(i<=8)
            tab[i]=0;
        else
            tab[i]=i*i;
    }
}
void print (int tab[]){                //funkcja, która będzie nam wypisywała indeksy elementów tablicy i ich wartości
    for(int i=0; i<20; i++){
        cout<<i<<"   "<<tab[i]<<endl;
    }
}
struct Operacja{                      //definicja struktury
    int arg;
    int res;
}sample;                              //deklaracja zmiennej sample
void makeOpTab (int tab[], Operacja OpTab[]){        //funkcja, która wypełni nam tablicę OpTab typu Operacja
    for(int i=0; i<20; i++)
        OpTab[i]={tab[i], tab[i]*tab[i]};
}
int main(){                            //funkcja główna
    int tab1[20];                      //deklaracja tab1 o rozmiarze 20
    filltab(tab1);                     //wypełnianie tablicy tab1 poprzez wywołanie funkcji
    print(tab1);                       //wypisanie indeksów elementów tablicy oraz ich wartości 
    
    sample={tab1[0], tab1[0]*tab1[0]};  //inicjalizacja zmiennej sample
    
    Operacja OpTab[20];                 //deklaracja tablicy OpTab o rozmiarze 20 typu Operacja
    makeOpTab(tab1, OpTab);             //wywołanie funkcji, która uzupełni nam tablicę OpTab
    cout<<OpTab[10].arg<<"   "<<OpTab[10].res<<endl;   //wypisanie 11 elementu tablicy typu arg i typu res
    
    return 0;
}