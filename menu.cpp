#include <iostream>
#include <conio.h>
using namespace std;

// Maksimal jumlah data
const int MAX = 100;
int data[MAX];
int jumlahData = 0;

void dMenu(){
    system("cls");
    cout << "Aplikasi Sorting Bubble\n";       
    cout << "1. Memasukkan data\n";            
    cout << "2. Menampilkan data\n";            
    cout << "3. Sorting (Bubble Sort)\n";           
    cout << "4. Sepatah Kata\n";            
    cout << "5. Exit\n";           
    cout << "Masukan angka: ";        
}

void mPertama(string pesan){
    system("cls");
    cout << "Hallo, saya menu " << pesan;
    getch();
}

void sepatahKata(){
    system("cls");
    cout << "Indonesia Bisa, Kita Juara\n@poliban";
    getch();
}

void inputData(){
    system("cls");
    cout << "Masukkan jumlah data (max " << MAX << "): ";
    cin >> jumlahData;

    if (jumlahData > MAX || jumlahData <= 0) {
        cout << "Jumlah data tidak valid!";
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

void tampilData(){
    system("cls");
    if (jumlahData == 0) {
        cout << "Belum ada data yang dimasukkan.";
    } else {
        cout << "Data saat ini:\n";
        for (int i = 0; i < jumlahData; i++) {
            cout << data[i] << " ";
        }
    }
    getch();
}

void bubbleSort(){
    system("cls");
    if (jumlahData == 0) {
        cout << "Data kosong, silakan input data terlebih dahulu.";
        getch();
        return;
    }

    for (int i = 0; i < jumlahData - 1; i++) {
        for (int j = 0; j < jumlahData - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                // Tukar data
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    cout << "Data berhasil diurutkan (ascending):\n";
    for (int i = 0; i < jumlahData; i++) {
        cout << data[i] << " ";
    }
    getch();
}

int main() {
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                inputData();
                break;
            case '2':
                tampilData();
                break;  
            case '3':
                bubbleSort();
                break;  
            case '4':
                sepatahKata();
                break;  
            case '5':
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia";
                getch();
                break;
        }
    } while (pl != '5');
    return 0;
}
