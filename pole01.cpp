// pole01.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    bool rostouci = true;

    // Načtení délky posloupnosti
    cout << "Zadejte delku posloupnosti: ";
    cin >> n;

    // Vytvoření pole pro posloupnost
    int posloupnost[n];

    // Načtení posloupnosti do pole
    cout << "Zadejte " << n << " cisel: ";
    for (int i = 0; i < n; i++) {
        cin >> posloupnost[i];
    }

    // Kontrola, zda prvky v poli tvoří rostoucí posloupnost
    for (int i = 1; i < n; i++) {
        if (posloupnost[i] <= posloupnost[i - 1]) {
            rostouci = false;
            break;
        }
    }

    // Výstup
    if (rostouci) {
        cout << "Prvky v poli tvori rostouci posloupnost." << endl;
    }
    else {
        cout << "Prvky v poli netvori rostouci posloupnost." << endl;
    }

    return 0;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
