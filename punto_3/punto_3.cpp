#include <iostream>
using namespace std;

int mayor(int *p, int n) {

    if (n <= 0) {
        cout << "Arreglo vacio" << endl;
        return 0;
    }

    int max = *p;

    for (int i = 1; i < n; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }

    return max;
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

    cout << "Valor mayor: " << mayor(arr, n) << endl;

    delete[] arr;

    return 0;
}
