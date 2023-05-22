#include <iostream>
using namespace std;

//Soal no 2
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void tampilArray(int arr[], int n);

int main()
{
    //Soal no 2
    int n;
    cout << "Masukkan jumlah elemen : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai Index ke-" << i << " : ";
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    selectionSort(arr, n);
    return 0;
}

//Soal no 2
void tampilArray(int arr[], int n)
{
    cout << "A[" << n << "] = {";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ",";
        }
    }
    cout << "}" << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Pengurutan Bubble Sort" << endl;
    tampilArray(arr, n);
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    cout << "Pengurutan Selection Sort" << endl;
    tampilArray(arr, n);
}
