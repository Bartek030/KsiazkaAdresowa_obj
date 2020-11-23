#include "MetodyPomocnicze.h"
#include <sstream>

using namespace std;

string MetodyPomocnicze::konwerjsaIntNaString(int liczba) {
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba) {
    return atoi(liczba.c_str());
}

string MetodyPomocnicze::wczytajLinie() {
    string wejscie = "";
    cin.clear();
    cin.sync();
    getline(cin, wejscie);
    return wejscie;
}

char MetodyPomocnicze::wczytajZnak() {
    string wejscie = "";
    char znak  = {0};

    while (true) {
        cin.clear();
        cin.sync();
        getline(cin, wejscie);

        if (wejscie.length() == 1) {
            znak = wejscie[0];
            break;
        }
        cout << "To nie jest pojedynczy znak. Wpisz ponownie." << endl;
    }
    return znak;
}
