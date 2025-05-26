#include <iostream>
#include <conio.h>
using namespace std;

void menu() {
    system("cls");
    cout << "== Aplikasi Sorting Bubble ==\n";
    cout << "1. Input Data\n";
    cout << "2. Tampilkan Data\n";
    cout << "3. Sorting Data\n";
    cout << "4. Sepatah Kata\n";
    cout << "5. Keluar\n";
    cout << "Pilih [1-5]: ";
}

int main() {
    char pilih;
    do {
        menu();
        pilih = getch();
    } while (pilih != '5');
    return 0;
}
