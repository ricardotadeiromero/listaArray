#include <iostream>
#define MAX 100

using namespace std;

int main() {
    int array[MAX];
    int maxArray[MAX];
    int n, j = -1;
    cout << "Digite o tamanho do array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Valor da posicao " << i << ": ";
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (array[i] > array[i + 1]) {
                j++;
                maxArray[j] = array[i];
            }
        } else if (i == n - 1) {
            if (array[i] > array[i - 1]) {
                j++;
                maxArray[j] = array[i];
            }
        } else if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
            j++;
            maxArray[j] = array[i];
        }
    }

    for (int i = 0; i <= j; i++) {
        cout << maxArray[i] << " ";
    }

    return 0;
}