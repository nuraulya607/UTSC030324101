#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    mahasiswa aulia;

    aulia.nim = "c030324101";
    aulia.nama = "nur aulia wati";
    aulia.alamat = "Handil Bakti, Komp Persada Permai Baru 1, no 191";
    aulia.ipk = 3.8;

    cout << "NIM    : " << aulia.nim << "\n";
    cout << "Nama   : " << aulia.nama << "\n";
    cout << "Alamat : " << aulia.alamat << "\n";
    cout << "IPK    : " << aulia.ipk << "\n";

    return 0;
}
