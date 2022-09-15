#include <iostream>
#include "Header.h"
using namespace std;


int main() {
    int a;
    list l1;
    list l2;
    cout << "Viberite deistvie" << endl;
    cout << "1 - dobavit' element" << endl;
    cout << "2 - ydalit' element" << endl;
    cout << "3 - pomenyat' element" << endl;
    cout << "4 - posmotret' informaciyu" << endl;
    cout << "5 - zavershit' programmu" << endl;
    cin >> a;
    

    switch (a) {

    case 1:
        int b;
        cout << "Vi hotite" << endl;
        cout << "1 - dobavit' v konec" << endl;
        cout << "2 - dobavit' v nachalo" << endl;
        cout << "3 - dobavit' po nomeru elementa" << endl;
        cout << "4 - nazad" << endl;
        cin >> b;
        switch (b) {

        case 1:
            int p_b;
            cout << "Vvedite chislo, kotoroe hotite dobavit'" << endl;
            cin >> p_b;
            l1.push_back(p_b);
            break;
        case 2:
            int p_f;
            cout << "Vvedite chislo, kotoroe hotite dobavit'" << endl;
            cin >> p_f;
            l1.push_front(p_f);
            break;

        case 3:
            break;
        case 4:
            break;
        }


    case 2:
        int c;
        cout << "Vi hotite" << endl;
        cout << "1 - ydalit' s konca" << endl;
        cout << "2 - ydalit' is nachala" << endl;
        cout << "3 - ydalit' po nomeru elementa" << endl;
        cout << "4 - nazad" << endl;
        cin >> c;

        switch (c) {
        case 1:
            l1.remove_last();
            cout << "chislo ydaleno!" << endl;

        case 2:
            l1.remove_first();
            cout << "chislo ydaleno!" << endl;

        case 3:

         break;
        }


    case 3:
        break;


    case 4:
        break;

   
    }
    return 0;

}