#include <iostream>

int main() {
    int n = 5; // Jumlah baris segitiga siku
    int total = 0; // Inisialisasi total penjumlahan
    
    for (int i = n; i >= 1; --i) {
        for (int j = 10; j > 10 - 2 * (n - i + 1); j -= 2) {
            total += j;
            std::cout << j;
            if (j > 10 - 2 * (n - i + 1) + 2)
                std::cout << " + ";
        }
        std::cout << " = " << total << std::endl;
    }
    
    std::cout << "----------" << std::endl;
    std::cout << total << std::endl;
    
    return 0;
}
