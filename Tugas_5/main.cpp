#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menukar dua elemen
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk partisi array menggunakan elemen pivot
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Pivot menggunakan elemen terakhir
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Fungsi utama Quick Sort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
