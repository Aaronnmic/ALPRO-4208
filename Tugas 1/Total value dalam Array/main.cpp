#include <iostream>

using namespace std;

int main()
{
    int arr[10], total = 0;

    cout << "Masukkan 10 angka: " << endl;

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    cout << "Total nilai elemen dalam array: " << total << endl;

    return 0;
}
