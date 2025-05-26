#include <iostream>
#include <conio.h>
using namespace std;

const int MAX = 100;
int data[MAX];
int jumlahData = 0;

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

void inputData() {
    system("cls");
    cout << "Jumlah data: ";
    cin >> jumlahData;
    if (jumlahData <= 0 || jumlahData > MAX) {
        cout << "Jumlah tidak valid!";
        getch();
        return;
    }
    for (int i = 0; i < jumlahData; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data[i];
    }
    cout << "Data berhasil dimasukkan.";
    getch();
}

void tampilData() {
    system("cls");
    if (jumlahData == 0) {
        cout << "Belum ada data.";
    } else {
        cout << "Data:\n";
        for (int i = 0; i < jumlahData; i++)
            cout << data[i] << " ";
    }
    getch();
}

void sortingData() {
    system("cls");
    if (jumlahData == 0) {
        cout << "Data kosong.";
        getch();
        return;
    }

    for (int i = 0; i < jumlahData - 1; i++) {
        for (int j = 0; j < jumlahData - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    cout << "Data setelah disorting:\n";
    for (int i = 0; i < jumlahData; i++) {
        cout << data[i] << " ";
    }
    getch();
}

int main() {
    char pilih;
    do {
        menu();
        pilih = getch();
        switch (pilih) {
            case '1': inputData(); break;
            case '2': tampilData(); break;
            case '3': sortingData(); break;

        }
    } while (pilih != '5');
    return 0;
}
