#include <iostream>
#include <string>

using namespace std;

struct taxi {
    int nym_taxi, stan;
    bool condit;
    string name_driv;
    string mark_avto;
    taxi* next;
};


void my_cin(int& z) {
    setlocale(LC_CTYPE, "ukr");
    while (!(cin >> z) || (cin.peek() != '\n')) {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Помилка, повторiть ввiд!" << endl;
    }
}


void add_taxi(taxi*& taxi_park) {
    setlocale(LC_CTYPE, "ukr");
    taxi* ptr = new taxi;
    cout << "Введiть прiзвище та iнiцiали водiя: ";
    cin >> ptr->name_driv;
    cout << "Введiть марку автомобiля водiя: ";
    cin >> ptr->mark_avto;
    cout << "Введiть номер таксi: ";
    my_cin(ptr->nym_taxi);
    ptr->stan = ptr->condit = 0;
    ptr->next = nullptr;
    if (taxi_park) {
        for (auto ptr2 = taxi_park;; ptr2 = ptr2->next)
            if (!ptr2->next) {
                ptr2->next = ptr;
                break;
            }
    }
    else
        taxi_park = ptr;
}


void send_taxi(taxi& taxi_park, int x) {
    setlocale(LC_CTYPE, "ukr");
    int y;
    cout << "Введiть номер таксi: "; my_cin(y);
    auto* time_ptr = &taxi_park;
    for (; time_ptr; time_ptr = time_ptr->next)
        if (time_ptr->nym_taxi == y)
            break;
        else if (!time_ptr->next) {
            cout << "Номер таксi " << y << " не знайдено...\n";
            return;
        }
    if (x == 2 && time_ptr->condit || x == 3 && !time_ptr->condit) {
        if (x == 2)
            cout << "Помилка! Таксі знаходиться на виклику.\n";
        else
            cout << "Помилка! Таксі знаходиться на парковці.\n";
        return;
    }
    else {
        if (x == 3) {
            time_ptr->condit = 0;
            cout << "Таксi повернулося на парковку.\n";
        }
        else {
            time_ptr->condit = 1;
            time_ptr->stan = rand() % 100;
            cout << "Таксi пiд номером:" << y << " ,вiдправлено на виклик номер:" << time_ptr->stan << "\n";
        }
    }
}


void show_taxi(taxi*& taxi_v) {
    setlocale(LC_CTYPE, "ukr");
    int c;
    cout << "Для показу таксi на виклику введiть 1, для показу таксi на парковцi введiть 2: ";
    my_cin(c);
    for (auto time_ptr(taxi_v); time_ptr; time_ptr = time_ptr->next)
        if (c == 1 && time_ptr->condit)
            cout << "\nНомер таксi " << time_ptr->nym_taxi <<
            "\nМарка авто " << time_ptr->mark_avto <<
            "\nВодiй " << time_ptr->name_driv <<
            "\nНомер виклику " << time_ptr->stan << endl;
        else if (c == 2 && !time_ptr->condit)
            cout << "\nНомер таксi " << time_ptr->nym_taxi <<
            "\nМарка авто " << time_ptr->mark_avto <<
            "\nВодiй " << time_ptr->name_driv << endl;
}


int main()
{
    setlocale(LC_CTYPE, "ukr");
    taxi* taxi_park(nullptr);
    int x(1);
    while (x) {
        cout << "\n";
        cout << " Щоб додати таксi введiть 1.\n" 
            " Щоб вiдправити таксi на виклик 2.\n"
            " Щоб повернути таксi на парковку 3.\n"
            " Для виводу спискiв таксi введiть 4.\n" 
            " Для виходу 0.\n "
            " Введiть значення: ";
        my_cin(x);
        cout << "\n";
        switch (x) {
        case 1:
            add_taxi(taxi_park);
            break;
        case 2: case 3:
            if (taxi_park) send_taxi(*taxi_park, x);
            else cout << "Для початку, додайте хоча б одне таксi!\n";
            break;
        case 4:
            if (taxi_park) show_taxi(taxi_park);
            else cout << "Для початку, додайте хоча б одне таксi!\n";
            break;
        default:
            if (x)
                cout << "Помилка! Введiть число вiд 0 до 4.\n";
        }
    }
    return 0;
}