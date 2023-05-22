#include <iostream>
using namespace std;

//Soal no 1
void GenapTerkecil(int arr[],int n);
bool isGanjil(int a);

int main()
{
    //Soal no 1
    int n;
    cout << "Masukkan jumlah elemen : ";
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++){
        cout << "Masukkan nilai Index ke-"<<i<< " : ";
        cin >> A[i];
    }
    GenapTerkecil(A,n);
}


//Soal no 1
void GenapTerkecil(int arr[],int n){
    int min = arr[0];
    int index;
    for(int i=0; i<n; i++){
        if(!isGanjil(arr[i])){
                if(arr[i]<min){
                    min =arr[i];
                    index = i;
                }
        }
    }
    cout << "Bilangan Genap terkecil : " << min << endl ;
    cout << "index : " << index << endl ;
}

bool isGanjil(int a){
    if(a%2==1){
        return true;
    }else {
        return false;
    }
}

