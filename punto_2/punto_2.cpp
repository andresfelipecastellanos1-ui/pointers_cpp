#include <iostream>
using namespace std;

int suma(int *arr, int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += *(arr + i);
    }

    return total;
}

int main() {
    int n;

    cout << "Cantidad de elementos: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese valor: ";
        cin >> *(arr + i);
    }

    cout << "Suma: " << suma(arr, n) << endl;

    delete[] arr;

    return 0;
}
