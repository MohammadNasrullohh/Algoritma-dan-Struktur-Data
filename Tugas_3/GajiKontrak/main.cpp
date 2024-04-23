#include <iostream>
#include <string>

using namespace std;

int main() {
    // Input data karyawan
    cout << "PROGRAM HITUNG GAJI KARYAWAN KONTRAK" << endl;
    string nama_karyawan, pendidikan;
    int golongan_jabatan;
    float jam_kerja;

    cout << "Nama Karyawan: ";
    getline(cin, nama_karyawan);
    cout << "Golongan Jabatan (1/2/3): ";
    cin >> golongan_jabatan;
    cout << "Pendidikan (SMA/D1/D3/S1): ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja: ";
    cin >> jam_kerja;

    // Gaji pokok
    float gaji_pokok = 300000;

    // Tunjangan jabatan
    float tunjangan_jabatan;
    if (golongan_jabatan == 1) {
        tunjangan_jabatan = 0.05 * gaji_pokok;
    } else if (golongan_jabatan == 2) {
        tunjangan_jabatan = 0.10 * gaji_pokok;
    } else if (golongan_jabatan == 3) {
        tunjangan_jabatan = 0.15 * gaji_pokok;
    } else {
        tunjangan_jabatan = 0;
    }

    // Tunjangan pendidikan
    float tunjangan_pendidikan;
    if (pendidikan == "SMA") {
        tunjangan_pendidikan = 0.025 * gaji_pokok;
    } else if (pendidikan == "D1") {
        tunjangan_pendidikan = 0.05 * gaji_pokok;
    } else if (pendidikan == "D3") {
        tunjangan_pendidikan = 0.20 * gaji_pokok;
    } else if (pendidikan == "S1") {
        tunjangan_pendidikan = 0.30 * gaji_pokok;
    } else {
        tunjangan_pendidikan = 0;
    }

    // Honor lembur
    float honor_lembur = 0;
    if (jam_kerja > 8) {
        honor_lembur = (jam_kerja - 8) * 3500;
    }

    // Total gaji
    float total_gaji = gaji_pokok + tunjangan_jabatan + tunjangan_pendidikan + honor_lembur;

    // Menampilkan hasil
    cout << "\nKaryawan yang bernama " << nama_karyawan << endl;
    cout << "Honor yang diterima" << endl;
    cout << "Tunjangan Jabatan Rp " << tunjangan_jabatan << endl;
    cout << "Tunjangan Pendidikan Rp " << tunjangan_pendidikan << endl;
    cout << "Honor Lembur Rp " << honor_lembur << endl;
    cout << "Total Gaji Rp " << total_gaji << endl;

    return 0;
}
