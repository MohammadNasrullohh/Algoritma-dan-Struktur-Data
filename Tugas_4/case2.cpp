#include <iostream>

int main() {
    int n = 10; // Jumlah bilangan ganjil yang akan dijumlahkan
    int sum = 0;

    // Menampilkan deret bilangan ganjil
    std::cout << "";
    for (int i = 1; i <= 19; i += 2) {
        std::cout << i;
        if (i < 19) {
            std::cout << " + ";
        } else {
            std::cout << " ";
        }

        // Menambahkan bilangan ganjil ke variabel sum
        sum += i;
    }

    // Menampilkan hasil penjumlahan
    std::cout << "= " << sum << std::endl;

    return 0;
}
