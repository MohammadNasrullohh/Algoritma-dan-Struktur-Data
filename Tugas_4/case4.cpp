#include <iostream>

int main() {
    int rows = 5; // Jumlah baris dalam segitiga
    int sum = 0; // Variabel untuk menyimpan hasil penjumlahan

    std::cout << "" << std::endl;

    // Loop untuk setiap baris
    for (int i = 1; i <= rows; ++i) {
        // Loop untuk setiap bilangan genap dalam baris
        for (int j = 1; j <= i * 2; j += 2) {
            // Menambahkan bilangan genap ke dalam hasil penjumlahan
            sum += j;
            // Menampilkan bilangan genap
            std::cout << j;
            // Menampilkan tanda tambah jika belum mencapai bilangan terakhir dalam baris
            if (j < i * 2 - 1) {
                std::cout << " + ";
            }
        }
        // Menampilkan hasil penjumlahan pada setiap baris
        std::cout << " = " << sum << std::endl;
    }

    return 0;
}
