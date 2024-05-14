#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Pegawai {
    char nama[15];
    int jam_kerja;
    int honor_lembur;
    int total_honor;
};

int main() {
    const int HONOR_HARIAN = 15000;
    const int TARIF_LEMBUR = 5000;
    const int JAM_KERJA_NORMAL = 8;

    int n;
    cout << "Masukkan jumlah pegawai: ";
    cin >> n;

    vector<Pegawai> pegawai(n);

    for (int i = 0; i < n; ++i) {
        cout << "Masukkan data pegawai ke-" << i+1 << ":\n";
        cout << "Masukkan Nama: ";
        cin >> pegawai[i].nama;
        cout << "Masukkan Jam Kerja: ";
        cin >> pegawai[i].jam_kerja;

        if (pegawai[i].jam_kerja > JAM_KERJA_NORMAL) {
            pegawai[i].honor_lembur = (pegawai[i].jam_kerja - JAM_KERJA_NORMAL) * TARIF_LEMBUR;
        } else {
            pegawai[i].honor_lembur = 0;
        }
        pegawai[i].total_honor = HONOR_HARIAN + pegawai[i].honor_lembur;
    }

    // Tampilkan tabel
    cout << "\n| No | Nama Pegawai    | Jam Kerja | Honor Lembur | Total Honor |\n";
    cout << "|----|-----------------|-----------|--------------|-------------|\n";
    for (int i = 0; i < n; ++i) {
        cout << "| " << setw(2) << i+1 << " | "
             << setw(14) << pegawai[i].nama << " | "
             << setw(9) << pegawai[i].jam_kerja << " | "
             << setw(12) << pegawai[i].honor_lembur << " | "
             << setw(11) << pegawai[i].total_honor << " |\n";
    }

    return 0;
}
