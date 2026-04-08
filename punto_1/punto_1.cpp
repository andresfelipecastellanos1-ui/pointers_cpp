#include <iostream>
using namespace std;

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    cout << "Ingrese el primer numero: ";
    cin >> x;

    cout << "Ingrese el segundo numero: ";
    cin >> y;

    intercambiar(&x, &y);

    cout << "Intercambiados: " << x << " " << y << endl;

    return 0;
}
