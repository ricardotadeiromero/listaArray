#include <iostream>
#define N 16
using namespace std;

void validation(int array[]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            array[i] *= 2;
            if (array[i] > 9) array[i] -= 9;
        }
        sum += array[i];
    }
    cout << sum << endl;
    if (sum % 2 == 0) {
        cout << "valido";
    } else {
        cout << "invalido";
    }
}

int main() {
    int array[N];

    for (int i = 0; i < N; i++) {
        cout << "Informe o " << i + 1 << "o digito do cartao: ";
        cin >> array[i];
        if (array[i] > 9) {
            cout << "Digito invalido" << endl;
            i--;
        }
    }
    validation(array);
}