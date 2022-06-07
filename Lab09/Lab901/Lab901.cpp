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
        cout << "�������, ������i�� ��i�!" << endl;
    }
}


void add_taxi(taxi*& taxi_park) {
    setlocale(LC_CTYPE, "ukr");
    taxi* ptr = new taxi;
    cout << "����i�� ��i����� �� i�i�i��� ���i�: ";
    cin >> ptr->name_driv;
    cout << "����i�� ����� �������i�� ���i�: ";
    cin >> ptr->mark_avto;
    cout << "����i�� ����� ����i: ";
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
    cout << "����i�� ����� ����i: "; my_cin(y);
    auto* time_ptr = &taxi_park;
    for (; time_ptr; time_ptr = time_ptr->next)
        if (time_ptr->nym_taxi == y)
            break;
        else if (!time_ptr->next) {
            cout << "����� ����i " << y << " �� ��������...\n";
            return;
        }
    if (x == 2 && time_ptr->condit || x == 3 && !time_ptr->condit) {
        if (x == 2)
            cout << "�������! ���� ����������� �� �������.\n";
        else
            cout << "�������! ���� ����������� �� ��������.\n";
        return;
    }
    else {
        if (x == 3) {
            time_ptr->condit = 0;
            cout << "����i ����������� �� ��������.\n";
        }
        else {
            time_ptr->condit = 1;
            time_ptr->stan = rand() % 100;
            cout << "����i �i� �������:" << y << " ,�i��������� �� ������ �����:" << time_ptr->stan << "\n";
        }
    }
}


void show_taxi(taxi*& taxi_v) {
    setlocale(LC_CTYPE, "ukr");
    int c;
    cout << "��� ������ ����i �� ������� ����i�� 1, ��� ������ ����i �� �������i ����i�� 2: ";
    my_cin(c);
    for (auto time_ptr(taxi_v); time_ptr; time_ptr = time_ptr->next)
        if (c == 1 && time_ptr->condit)
            cout << "\n����� ����i " << time_ptr->nym_taxi <<
            "\n����� ���� " << time_ptr->mark_avto <<
            "\n���i� " << time_ptr->name_driv <<
            "\n����� ������� " << time_ptr->stan << endl;
        else if (c == 2 && !time_ptr->condit)
            cout << "\n����� ����i " << time_ptr->nym_taxi <<
            "\n����� ���� " << time_ptr->mark_avto <<
            "\n���i� " << time_ptr->name_driv << endl;
}


int main()
{
    setlocale(LC_CTYPE, "ukr");
    taxi* taxi_park(nullptr);
    int x(1);
    while (x) {
        cout << "\n";
        cout << " ��� ������ ����i ����i�� 1.\n" 
            " ��� �i�������� ����i �� ������ 2.\n"
            " ��� ��������� ����i �� �������� 3.\n"
            " ��� ������ �����i� ����i ����i�� 4.\n" 
            " ��� ������ 0.\n "
            " ����i�� ��������: ";
        my_cin(x);
        cout << "\n";
        switch (x) {
        case 1:
            add_taxi(taxi_park);
            break;
        case 2: case 3:
            if (taxi_park) send_taxi(*taxi_park, x);
            else cout << "��� �������, ������� ���� � ���� ����i!\n";
            break;
        case 4:
            if (taxi_park) show_taxi(taxi_park);
            else cout << "��� �������, ������� ���� � ���� ����i!\n";
            break;
        default:
            if (x)
                cout << "�������! ����i�� ����� �i� 0 �� 4.\n";
        }
    }
    return 0;
}