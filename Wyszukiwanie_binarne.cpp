/*
+ilość miejsc w tabeli : 100
+losowanie liczb do tabeli z zakresu : Użytkownik ma podać!
-Wyświetlenie oraz sortowanie tych liczb
*/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int tab_to_rand[100];
    int x, y, k, choice;
    bool statement = false;
    cout << "Podaj początek zakresu: ";
    cin >> x;
    cout << "\nPodaj koniec zakresu: ";
    cin >> k;
    k = k - x;
    while (statement != true) {
        for (int i = 0; i < 100; i++) {
            choice = rand() % k + x;
            tab_to_rand[i] = choice;
            cout << tab_to_rand[i] << "\n";
        }

        sort(tab_to_rand, tab_to_rand + 100);
        cout << "Tablica tab_to_rand posortowana rosnąco: \n";

        for (int i = 0; i < 100; i++) {
            cout << tab_to_rand[i] << '\n';
        }

        int lewy = 0;
        int prawy = 100 - 1;
        int s = 0;
    poczatek:
        if (lewy > prawy) {
            s = -1;
            cout << "Element nie występuje w zbiorze !";
            break;
        }
        else {
            y = rand() % 10 + 1;
            s = (lewy + prawy) / 2;
            if (tab_to_rand[s] == y) {
                cout << "Element występuje w zbiorze na pozycji " << s;
            }
            else {
                if (tab_to_rand[s] < y) {
                    lewy = s + 1;
                    goto poczatek;
                }
                else {
                    prawy = s - 1;
                    goto poczatek;
                }
            }
        }

        statement = true;
    }
    return 0;
}
