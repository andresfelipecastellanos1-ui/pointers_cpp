#include <iostream>
using namespace std;

void verEntero(int *p) {
    cout << "Como entero: " << *p << endl;
}

void verBytes(char *p) {
    cout << "Bytes: ";
    for (int i = 0; i < 4; i++) {
        cout << (int)*(p + i) << " ";
    }
    cout << endl;
}

int main() {

    float num;
    cout << "Ingrese un numero float: ";
    cin >> num;

    int *p1 = (int*)&num;
    char *p2 = (char*)&num;

    cout << "Direccion float: " << &num << endl;
    cout << "Direccion int*: " << p1 << endl;
    cout << "Direccion char*: " << (void*)p2 << endl;

    verEntero(p1);
    verBytes(p2);

    return 0;
}
