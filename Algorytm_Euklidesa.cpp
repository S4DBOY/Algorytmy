#include <iostream>

using namespace std;

// Funkcja NWD przyjmująca 2 argumenty: a i b typu int – czyli liczby, których NWD chcemy poznać. Funkcja zwraca wartość typu int – czyli żądane NWD(a,b)

int nwd(int a,int b)
{
    int c;                    // Tworzymy zmienną c o typie int
    while(b != 0)             // Tworzymy pętlę działającą gdy b ≠ 0
    {
        c = a % b;              // Zmienna c przyjmuje wartość a modulo b
        a = b;                // Przypisujemy b do a
        b = c;                // Przypisujemy c do b
    }
    return a;                 // Zwracamy a, czyli żądane NWD(a,b)
}

int main()
{

  //wyświetlenie największego wspólnego dzielnika liczb
  
    cout<<nwd(56,42); //Tu bedzie pokazywać "14" czyli wspólny dzielnik
}
