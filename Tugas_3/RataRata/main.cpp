#include <iostream>
#include <string>

// Fungsi untuk menghitung rata-rata
float hitungRataRata(float nilai_pertama, float nilai_kedua, float nilai_ketiga) {
    // Menghitung rata-rata dari tiga nilai
    return (nilai_pertama + nilai_kedua + nilai_ketiga) / 3;
}

int main() {
    // Menampilkan pesan masukkan program
    std::cout << "PROGRAM HITUNG NILAI RATA-RATA" << std::endl;

    // Variabel untuk menyimpan nama dan nilai pertandingan
    std::string nama;
    float nilai_pertama, nilai_kedua, nilai_ketiga;

    // Meminta masukkan pengguna
    std::cout << "Nama Siswa: ";
    std::getline(std::cin, nama);
    std::cout << "Nilai Pertandingan I: ";
    std::cin >> nilai_pertama;
    std::cout << "Nilai Pertandingan II: ";
    std::cin >> nilai_kedua;
    std::cout << "Nilai Pertandingan III: ";
    std::cin >> nilai_ketiga;

    // Proses perhitungan nilai rata-rata
    float nilai_rata_rata = hitungRataRata(nilai_pertama, nilai_kedua, nilai_ketiga);

    // Logika penentuan juara
    std::cout << std::endl << "Layar Keluaran" << std::endl;
    if (nilai_rata_rata >= 80) {
        std::cout << "Siswa yang bernama " << nama << std::endl;
        std::cout << "Memperoleh nilai rata-rata " << nilai_rata_rata << " dan menjadi juara ke-1 dari hasil perlombaan yang diikutinya." << std::endl;
    } else if (nilai_rata_rata >= 75) {
        std::cout << "Siswa yang bernama " << nama << std::endl;
        std::cout << "Memperoleh nilai rata-rata " << nilai_rata_rata << " dan menjadi juara ke-2 dari hasil perlombaan yang diikutinya." << std::endl;
    } else if (nilai_rata_rata >= 65) {
        std::cout << "Siswa yang bernama " << nama << std::endl;
        std::cout << "Memperoleh nilai rata-rata " << nilai_rata_rata << " dan menjadi juara ke-3 dari hasil perlombaan yang diikutinya." << std::endl;
    } else {
        std::cout << "Tidak ada yang mendapatkan juara." << std::endl;
    }

    return 0;
}
