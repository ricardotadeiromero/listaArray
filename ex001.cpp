#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int num;
    int i;
    int array[MAX];
    cout << "Digite o numero para converter em binario: ";
    cin >> num;
    for (i = 0; num > 0; i++) {
        array[i] = num % 2;
        num /= 2;
    }
    for (int j = 0; j < i; j++) {
        cout << array[j];
    }

    return 0;
}