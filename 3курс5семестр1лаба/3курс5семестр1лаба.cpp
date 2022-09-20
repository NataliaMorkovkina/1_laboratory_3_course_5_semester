#include <iostream>
#include "Header.h"
using namespace std;


int main() {
    int a;
    list l1;
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
        cout << "4 - ydalit' vse elementi" << endl;
        cout << "5 - nazad" << endl;
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
        case 4:
            cout << "Vse elementi spuska ydaleni\t";
            //?l1.remove();

            break;
        case 5:

            break;
        }


    case 3:
        cout << "Vse elementi v spiske: \t";
        l1.print();
        cout << "Viberite nomer elementa, kotoriy hotite zamenit': \t";
        //cin >> ;
        //функция замены элемента
        // if (функция замены элемента == true) {
        //cout << "Vash noviy spisok\t";
        //l1.print();}
        //else{
        //cout << "Ne ydalos' zamenit' element\t";

        break;


    case 4:
        int d;
        cout << "Vi hotite" << endl;
        cout << "1 - yznat' element po ego nomeru" << endl;
        cout << "2 - yznat' razmer spiska" << endl;
        cout << "3 - posmotret' ves' spisok" << endl;
        cout << "4 - proverit' spisok na pustotu" << endl;
        cout << "5 - proverit' spisok na soderzhanie drugogo spiska" << endl;
        cout << "6 - nazad" << endl;
        cin >> d;

        switch (d)
        {
        case 1:
            cout << "Vvedite nomer elementa, kotoriy hotite yznat'\t";
            break;

        case 2:
            cout << "razmer spiska: " << endl;
            l1.size();
            break;

        case 3:
            cout << "ves' spisok" << endl;
            l1.print();
            break;

        case 4:
            if (l1.is_empty()) {
                cout << "spisok pust" << endl;
            }
            cout << "spisok ne pust" << endl;
            break;

        case 5:
            cout << "Vvedite vtoroiy spisok" << endl;
            int a;
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
                cout << "4 - ydalit' vse elementi" << endl;
                cout << "5 - nazad" << endl;
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
                case 4:
                    cout << "Vse elementi spuska ydaleni\t";
                    //?l1.remove();

                    break;
                case 5:

                    break;
                }


            case 3:
                cout << "Vse elementi v spiske: \t";
                l1.print();
                cout << "Viberite nomer elementa, kotoriy hotite zamenit': \t";
                //cin >> ;
                //функция замены элемента
                // if (функция замены элемента == true) {
                //cout << "Vash noviy spisok\t";
                //l1.print();}
                //else{
                //cout << "Ne ydalos' zamenit' element\t";

                break;


            case 4:
                int d;
                cout << "Vi hotite" << endl;
                cout << "1 - yznat' element po ego nomeru" << endl;
                cout << "2 - yznat' razmer spiska" << endl;
                cout << "3 - posmotret' ves' spisok" << endl;
                cout << "4 - nazad" << endl;
                cin >> d;

                switch (d)
                {
                case 1:
                    cout << "Vvedite nomer elementa, kotoriy hotite yznat'\t";
                    break;

                case 2:
                    cout << "razmer spiska: " << endl;
                    l1.size();
                    break;

                case 3:
                    cout << "ves' spisok" << endl;
                    l1.print();
                    break;
                }

            l1.is_list_existing(l2);

            break;


            case 6:
            break;
            }

            break;
        }

   
    }

    return 0;

}