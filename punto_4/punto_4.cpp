#include <iostream>
using namespace std;

int duplicar(int x) { return x * 2; }
int triplicar(int x) { return x * 3; }

void aplicar(int *p, int n, int (*f)(int)) {
    for (int i = 0; i < n; i++) {
        *(p + i) = f(*(p + i));
    }
}

int main() {

    int n, op;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese valor: ";
        cin >> *(arr + i);
    }

    cout << "1.Duplicar 2.Triplicar: ";
    cin >> op;

    aplicar(arr, n, op == 1 ? duplicar : triplicar);

    cout << "Resultado: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }

    delete[] arr;

    return 0;
}
