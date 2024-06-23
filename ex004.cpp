#include <iostream>
#define MAX 100

using namespace std;

bool hasAppeared(int array[], int len, int value) {
    for (int i = 0; i < len; i++) {
        if (array[i] == value) return true;
    }
    return false;
}

int search(int array[], int position) { return array[position]; }

int main() {
    int array[MAX];
    int newArray[MAX] = {0};
    int n, j = 1;
    cout << "Digite o numero de casas: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "Informe o valor da casa " << i << ": ";
        cin >> array[i];
        if (hasAppeared(array, i, array[i])) {
            cout << array[i] << " ja consta na sequencia" << endl;
            i--;
        }
        if (array[i] > n) {
            cout << "Valor fora da caixa" << endl;
            i--;
        }
    }

    for (int i = 0; i < n; i++, j++) {
        int temp = search(array, newArray[j - 1]);
        if (hasAppeared(newArray, j, temp)) {
            break;
        }
        newArray[j] = temp;
    }

    for (int i = 0; i < j; i++) {
        cout << newArray[i] << " ";
    }

    return 0;
}