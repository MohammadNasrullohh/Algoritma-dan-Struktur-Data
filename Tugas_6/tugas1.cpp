#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    char nim[5];
    char nama[15];
    float nilai_uts;
    float nilai_uas;
    float nilai_akhir;
    char nilai_huruf;
};

char hitungNilaiHuruf(float nilai_akhir) {
    if (nilai_akhir >= 80) return 'A';
    else if (nilai_akhir >= 70) return 'B';
    else if (nilai_akhir >= 56) return 'C';
    else if (nilai_akhir >= 47) return 'D';
    else return 'E';
}

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    vector<Mahasiswa> mahasiswa(n);

    for (int i = 0; i < n; ++i) {
        cout << "Masukkan data mahasiswa ke-" << i+1 << ":\n";
        cout << "Masukkan NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Masukkan Nama: ";
        cin >> mahasiswa[i].nama;
        cout << "Masukkan Nilai UTS: ";
        cin >> mahasiswa[i].nilai_uts;
        cout << "Masukkan Nilai UAS: ";
        cin >> mahasiswa[i].nilai_uas;

        mahasiswa[i].nilai_akhir = (mahasiswa[i].nilai_uas * 0.4) + (mahasiswa[i].nilai_uts * 0.6);
        mahasiswa[i].nilai_huruf = hitungNilaiHuruf(mahasiswa[i].nilai_akhir);
    }

    // Tampilkan tabel
    cout << "\n| No | Nama Mahasiswa   | Nilai UTS | Nilai UAS | Nilai Akhir | Nilai Huruf |\n";
    cout << "|----|------------------|-----------|-----------|-------------|-------------|\n";
    for (int i = 0; i < n; ++i) {
        cout << "| " << setw(2) << i+1 << " | "
             << setw(16) << mahasiswa[i].nama << " | "
             << setw(9) << mahasiswa[i].nilai_uts << " | "
             << setw(9) << mahasiswa[i].nilai_uas << " | "
             << setw(11) << mahasiswa[i].nilai_akhir << " | "
             << setw(11) << mahasiswa[i].nilai_huruf << " |\n";
    }

    return 0;
}
