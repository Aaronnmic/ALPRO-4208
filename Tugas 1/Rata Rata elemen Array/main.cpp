#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    float total = 0, rata2;

    cout << "Masukkan 10 angka: " << endl;

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    rata = total / 10;

    cout << "Rata-rata nilai elemen dalam array: " << rata2 << endl;

    return 0;
}
