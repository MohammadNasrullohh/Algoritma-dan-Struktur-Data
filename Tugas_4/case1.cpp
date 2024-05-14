#include <iostream>

int main() {
    int n = 10; // Jumlah bilangan genap yang akan dijumlahkan
    int sum = 0;

    // Menampilkan deret bilangan genap
    std::cout << "";
    for (int i = 2; i <= 20; i += 2) {
        std::cout << i;
        if (i < 20) {
            std::cout << " + ";
        } else {
            std::cout << " ";
        }

        // Menambahkan bilangan genap ke variabel sum
        sum += i;
    }

    // Menampilkan hasil penjumlahan
    std::cout << "= " << sum << std::endl;

    return 0;
}
