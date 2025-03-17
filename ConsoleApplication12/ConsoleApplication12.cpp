#include <iostream>
#include <set>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Polish"); //polskie znaki
    set<int> set;
    while (true) {
        int funkcja;
        cout << "Wybierz funkcje: 1 - dodaj, 2 - wypisz zawartość, 3 - znajdź element, 4 - usuń element: ";
        cin >> funkcja;
        switch (funkcja)
        {
        case 1: {
            int liczba;
            cout << "Podaj liczbe: ";
            cin >> liczba;
            auto wynik = set.insert(liczba);
            if (!wynik.second) {
                cout << "Błąd - liczba już występuje" << endl;
            }
            else {
                cout << "Liczba została dodana" << endl;
            }
            break;
        };
        case 2:
        {
            cout << "Wypisz wszystkie liczby z setów: ";
            for (int x : set) {
                cout << x << ", ";
            }
            cout << endl;
            break;
        };
        case 3: {
            int liczba;
            cout << "Podaj liczbe: ";
            cin >> liczba;
            if (set.find(liczba) != set.end()) {
                cout << "Liczba " << liczba << " została znaleziona" << endl;
            }
            else {
                cout << "Liczba " << liczba << " nie została znaleziona" << endl;
            }
            break;
        };
        case 4: {
            int liczba;
            cout << "Podaj liczbe: ";
            cin >> liczba;
            size_t usuniete = set.erase(liczba);
            if (usuniete == 0) {
                cerr << "Błąd: Liczba " << liczba << " nie istnieje w set, więc nie można jej usunąć!" << endl;
            }
            else {
                cout << "Liczba " << liczba << " została usunięta." << endl;
            }
        }
        }
    }
}
