#include <iostream>
#include <cctype>
#include <vector>
#include <stdio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>


using namespace std;

int czas=1500;

class Pytanie{
    string tresc,a,b,c,d;
    char odp;
public:
    Pytanie(string,string,string,string,string,char);
    void wypisz();
    void sprawdz(char);
};

Pytanie::Pytanie(string txt,string aa,string bb,string cc,string dd,char ad){
    tresc=txt;
    a=aa;
    b=bb;
    c=cc;
    d=dd;
    odp=ad;
}

void Pytanie::wypisz(){
    system( "cls" ); // czyszczenie konsloli
    cout<<tresc<<endl;
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
    cout<<"C: "<<c<<endl;
    cout<<"D: "<<d<<endl;
    cout<<"\nTwoja odpowiedz to:"<<endl;
}

void Pytanie::sprawdz(char jaka){
    if(jaka==odp||tolower(jaka)==odp||jaka==tolower(odp)){
        cout<<"\nPoprawnie"<<endl;
        Sleep (czas);
    }
    else{
        cout<<"\nZle. Chuj do dupy"<<endl;
        Sleep (czas);
    }
}

void matematyka();

vector<Pytanie>tablica;


int main(){
    cout<<"Wybierz kategorie"<<endl;
    cout<<"1) wszystkie"<<endl;
    cout<<"2) matematyka"<<endl;
    //itd jakies tam pierdolety // kazda kategoria to bedzie wlasny plik cpp
    int x;
    cin>>x;

    switch(x){
        case 1: matematyka(); break; //itd pierdolety(); kategoria(); nextkategoria(); innepierdolety();
        case 2: matematyka(); break;
        default: cout<<"kurwy?"<<endl;
        //i tych case'ow sie tu dojebie tyle ile kategorii sie zrobi i wszystkie maja dokladnie taki sam szablon poza nazwa funkcji

    }
    srand(time(NULL));
    char answer;
    while(1){
        x=(rand() % tablica.size());
        tablica[x].wypisz();
        cin>>answer;
        tablica[x].sprawdz(answer);
        tablica.erase(tablica.begin()+x);
        if(tablica.size()==0){
            system( "cls" );
            cout<<"Wyjebalem sie z pytan"<<endl;
            Sleep (czas);
            break;
        }
    }
    return 0;
}




void matematyka(){
    // za ten komentarz leca wszystkie pytania
    // szablon pytania wyglada tak
    // Pytanie nanzwa_pytania("tresc pytania","odpowiedz A","odpowiedz B","odpowiedz C","odpowiedz D","prawidlowa odpowiedz (a/b/c/d)")
    // potem linia dodajaca stworzony wyzej obiekt Pytanie do tablicy pula_pytan

    Pytanie mat1("2+2 to?   mat1","Wolverine","4","3k","allach akbar",'b');
    tablica.push_back(mat1);

    Pytanie mat2("ile bokow ma trojkat     mat2","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat2);

    Pytanie mat3("sposrod podanych wybierz jednostke obietosci     mat3","ruchu peja","barak obama","litr","mistrz 2giego planu",'c');
    tablica.push_back(mat3);

    Pytanie mat4("ile bokow ma trojkat    mat4","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat4);

    Pytanie mat5("ile bokow ma trojkat    mat5","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat5);

    Pytanie mat6("ile bokow ma trojkat    mat6","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat6);

    Pytanie mat7("ile bokow ma trojkat    mat7","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat7);

    Pytanie mat8("ile bokow ma trojkat    mat8","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat8);

    Pytanie mat9("ile bokow ma trojkat    mat9","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat9);

    Pytanie mat10("ile bokow ma trojkat    mat10","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat10);

    Pytanie mat11("ile bokow ma trojkat    mat11","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat11);

    Pytanie mat12("ile bokow ma trojkat    mat12","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat12);

    Pytanie mat13("ile bokow ma trojkat    mat13","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat13);

    Pytanie mat14("ile bokow ma trojkat    mat14","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat14);

    Pytanie mat15("ile bokow ma trojkat    mat15","nieskonczenie wiele","abrakadabra","3","akwarium",'c');
    tablica.push_back(mat15);

    // wszystkie pytania leca przed ta linie
    // szablon pytania wyglada tak
    // Pytanie nanzwa_pytania("tresc pytania","odpowiedz A","odpowiedz B","odpowiedz C","odpowiedz D","prawidlowa odpowiedz (a/b/c/d)")
    // potem linia dodajaca stworzony wyzej obiekt Pytanie do tablicy pula_pytan
}
