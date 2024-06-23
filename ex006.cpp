#include <iostream>

using namespace std;

int main() {
    int n, m, die = 0, count = 0;
    int array[100] = {0};

    cout << "Informe o valor do n: ";
    cin >> n;
    cout << "Informe o valor do m: ";
    cin >> m;

    do {
        for (int i = 0; i < n; i++) {
            if (array[i] != 0) continue;
            count++;
            if (count == m) {
                array[i] = ++die;
                count = 0;
            }
        }
    } while (die != n);

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 1;
}