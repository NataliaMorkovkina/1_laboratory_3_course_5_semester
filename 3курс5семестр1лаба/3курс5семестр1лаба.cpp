#include <iostream>
#include "Header.h"
using namespace std;


int main() {
    list l1;
    while (true) {
        int a;
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
                int a_b;
                int a_b_i;
                cout << "Vvedite chislo, kotoroe hotite dobavit'" << endl;
                cin >> a_b;
                cout << "Vvedite nomer elementa, pered kotorim hotite dobavit'" << endl;
                cin >> a_b_i;
                l1.add_by_index(a_b_i, a_b);
                break;

            case 4:
                break;
            }
            break;

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
                int r_b_i;
                cout << "Vvedite nomer elementa, kotoriu hotite dobavit'" << endl;
                cin >> r_b_i;
                l1.remove_by_index(r_b_i);
                break;
            case 4:
                l1.remove();
                cout << "Vse elementi spuska ydaleni\t";

                break;
            case 5:

                break;
            }


        case 3:
            cout << "Vse elementi v spiske: \t";
            l1.print();
            int z_i;
            int z;

            cout << "Viberite nomer elementa, kotoriy hotite zamenit': \t";
            cin >> z_i;
            cout << "Vvedite chislo, na kotoroe hotite zamenit'" << endl;
            cin >> z;
            l1.zamena(z_i, z);
           
            break;

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

            switch (d){
            case 1:
                cout << "Vvedite nomer elementa, kotoriy hotite yznat'\t";
                break;

            case 2:
                cout << "razmer spiska: " << endl;
                cout << l1.size() << '\n';
                break;

            case 3:
                cout << "ves' spisok" << endl;
                l1.print();
                break;

            case 4:
                if (l1.is_empty()) {
                    cout << "spisok pust" << endl;
                }
                else
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
                        l2.push_back(p_b);
                        break;
                    case 2:
                        int p_f;
                        cout << "Vvedite chislo, kotoroe hotite dobavit'" << endl;
                        cin >> p_f;
                        l2.push_front(p_f);
                        break;

                    case 3:
                        int a_b;
                        int a_b_i;
                        cout << "Vvedite chislo, kotoroe hotite dobavit'" << endl;
                        cin >> a_b;
                        cout << "Vvedite nomer elementa, pered kotorim hotite dobavit'" << endl;
                        cin >> a_b_i;
                        l2.add_by_index(a_b_i, a_b);
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
                        l2.remove_last();
                        cout << "chislo ydaleno!" << endl;

                    case 2:
                        l2.remove_first();
                        cout << "chislo ydaleno!" << endl;

                    case 3:

                        break;
                    case 4:
                        l2.remove();
                        cout << "Vse elementi spuska ydaleni\t";

                        break;
                    case 5:

                        break;
                    }


                case 3:
                    cout << "Vse elementi v spiske: \t";
                    l2.print();
                    cout << "Viberite nomer elementa, kotoriy hotite zamenit': \t";
                    int index;
                    cin >> index;
                    int value;
                    cin >> value;
                    if (l2.zamena(index, value) == true) {
                        cout << "Vash noviy spisok\t";
                        l2.print();
                    }
                  

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
                        l2.size();
                        break;

                    case 3:
                        cout << "ves' spisok" << endl;
                        l2.print();
                        break;
                    }

                    l1.is_list_existing(l2);

                    break;


                case 6:
                    break;
                }

                break;
            }
            break;
        case 5:
            return 0;
        }
    }
    return 0;

}
