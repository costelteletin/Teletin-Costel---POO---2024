#include "pch.h"
#include <iostream>
using namespace System; //pentru Visual C++/CLI
using namespace std; //pentur bibilioteci cu functii standard, cunsocute din C++
// de citit despre modificatorii private, public, protected
struct Carti
{
    unsigned an;
    char nume[20];
    char autor[20];
    int Vechime;

};
class Carte
{
private:
    unsigned an;
    char nume[20];
    char autor[20];
    unsigned vechime;
public:
    // 2 metode cu acelasi nume cu cel al clasei, adica Pers
    // o metoda cu params si  una fara params
    Carte(unsigned an1, char* num1, char* autor1)
    {
        an = an1;
        strcpy_s(nume, 20, num1);
        strcpy_s(autor, 20, autor1);

    }
    Carte() {}
    unsigned arata_an() { return this->an; }
    char* arata_nume() { return this->autor; }
};
int main()
{
    Console::WriteLine("Introduceti numarul de carti:");
    int nr_carti;
    cin >> nr_carti;
    Carte* Carti = new Carte[nr_carti];
    for (int i = 0; i < nr_carti; i++) {
        Console::WriteLine("Introduceti titlul cartii {0}: ", i + 1);
        char nume[20];
        cin >> nume;
        Console::WriteLine("Introduceti numele autorului {0}: ", i + 1);
        char autor[20];
        cin >> autor;
        strcpy_s(Carti[i].nume, 20, autor);
        Console::WriteLine("Introduceti anul aparitiei {0}: ", i + 1);
        unsigned an;
        cin >> an;
        Carti[i].vechime = 2024 - an;
    }
    Console::WriteLine("Afisam numele cartilor si anul aparitiei: "); // Specific Visual C++/CLI
    for (int i = 0; i < nr_carti; i++) {
        cout << Carti[i].nume << "\t" << Carti[i].autor << "\t" << Carti[i].vechime << endl;
    }
    Console::ReadKey(); //Mentinem fereastra deschisa

}
