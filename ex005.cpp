#include <iostream>
#define MAX 100

using namespace std;

int main() {
    int n, array1[MAX], array2[MAX], array3[MAX] = {0};
    cout << "Informe o tamanho dos arrays: ";
    cin >> n;

    int k = ((2 * n) - 1);
    for (int i = n - 1; i >= 0; i--) {
        cout << "(Array 1) Valor da posicao " << n - 1 - i << ": ";
        cin >> array1[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << "(Array 2) Valor da posicao " << n - 1 - i << ": ";

        cin >> array2[i];
    }
    for (int i = 0; i < k; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            if (j < n && (i - j) < n) {
                sum += array1[j] * array2[i - j];
            }
        }
        array3[i] = sum;
    }

    for (int i = 0; i < k; i++) {
        cout << array3[i] << " ";
    }

    return 0;
}
