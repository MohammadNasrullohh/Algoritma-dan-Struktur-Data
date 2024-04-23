#include <iostream>
#include <string>

// Fungsi untuk seleksi nilai
std::string seleksiNilai(float nilaiAkhir) {
    if (nilaiAkhir > 80) {
        return "A";
    } else if (nilaiAkhir > 70) {
        return "B";
    } else if (nilaiAkhir > 56) {
        return "C";
    } else if (nilaiAkhir > 46) {
        return "D";
    } else {
        return "E";
    }
}

int main() {
    std::string nama;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian;

    // Input nama dan nilai-nilai
    std::cout << "Nama Siswa: ";
    std::getline(std::cin, nama);
    std::cout << "Nilai Keaktifan: ";
    std::cin >> nilaiKeaktifan;
    std::cout << "Nilai Tugas: ";
    std::cin >> nilaiTugas;
    std::cout << "Nilai Ujian: ";
    std::cin >> nilaiUjian;

    // Menghitung nilai murni
    nilaiKeaktifan *= 0.2;
    nilaiTugas *= 0.3;
    nilaiUjian *= 0.5;

    // Menghitung nilai akhir
    float nilaiAkhir = nilaiKeaktifan + nilaiTugas + nilaiUjian;

    // Seleksi nilai
    std::string grade = seleksiNilai(nilaiAkhir);

    // Menampilkan nilai
    std::cout << "Siswa yang bernama " << nama << std::endl;
    std::cout << "Dengan Nilai Persentasi Yang dihasilkan." << std::endl;
    std::cout << "Nilai Keaktifan * 20% : " << nilaiKeaktifan << std::endl;
    std::cout << "Nilai Tugas * 30% : " << nilaiTugas << std::endl;
    std::cout << "Nilai Ujian * 50% : " << nilaiUjian << std::endl;
    std::cout << "Jadi Siswa yang bernama " << nama << " memperoleh nilai akhir sebesar " << nilaiAkhir << " dengan grade " << grade << std::endl;

    return 0;
}
