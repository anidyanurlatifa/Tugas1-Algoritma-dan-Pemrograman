#include <iostream>
#include <cstdlib>

using namespace std;

int tambah(int a, int b){
    int c = a + b;
    return c;
}

int kurang(int a, int b){
    int c = a - b;
    return c;
}

int kali(int a, int b){
    int c = a * b;
    return c;
}

float bagi(float a, int b){
    float c = a / b;
    return c;
}

int total(int arr[], int x){
    int hasil = 0;
    for(int i=0; i < x; i++){
        hasil += arr[i];
    }
    return hasil;
}


float rata(int arr[],int x){
    float hasil = 0;
    for(int i=0; i < x; i++){
        hasil += arr[i];
    }
    return hasil /= x;
}


int main()
{
    int x,y,n;
    cout << "<----------------> Soal Tambah,Kurang,Kali,Bagi <--------------->"<< endl;
    char h;
    cout << "masukan angka(1): ";
    cin >> x;
    cout << "masukan angka(2): ";
    cin >> y;
    cout << "hasil: " << endl;

    cout << "a.Ditambahkan = "<< tambah(x,y) << endl;
    cout << "b.Dikurangkan = "<< kurang(x,y) << endl;
    cout << "c.Dikalikan   = "<< kali(x,y) << endl;
    cout << "d.Dibagikan   = "<< bagi(x,y) << endl;
    cout <<  "<--------------------> Soal Element Array <------------------>" << endl;
    cout << "Masukkan jumlah element Array  : ";
    cin >> x;
    int arr[x];
    for(int i=0;i<x;i++){
        cout << "Masukkan angka array ke : [" << i << "] = ";
        cin >> arr [i];
    }
    cout <<  "<----------------------------------------------------------->" << endl;

    cout << "Total hasil bilangan array\t\t: " << total(arr,x) << endl;
    cout << "Rata - Rata hasil bilangan array\t\t: " << rata(arr,x) << endl;
    cout <<  "<----------------------------------------------------------->" << endl;

    return 0;
}

