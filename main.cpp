#include <iostream>


using namespace std;
void bubbleSort(int arr[], int n);

int main() {
    char respuesta;

    do {
    int numeros;

    cout << "Ingrese cuantos numeros quiere: ";
    cin >> numeros;


    int n[numeros];


    cout << "Ingrese los " << numeros << " numeros separados por espacios: ";
    for (int i = 0; i < numeros; ++i) {
        cin >> n[i];
    }

    bubbleSort(n, numeros);


    cout << "Numeros ordenados de menor a mayor: ";
    for (int i = 0; i < numeros; ++i) {
        cout << n[i] << " ";
    }
    cout << endl;

    cout << "¿Desea realizar el ejercicio nuevamente? (s/n): ";
    cin >> respuesta;
} while (respuesta == 's' || respuesta == 'S');

    return 0;
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
