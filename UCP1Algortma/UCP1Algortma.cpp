// UCP1Algortma.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// 1. di mulai dari pass 1 bubble sort membandingkan elemen pada indeks 0 dan 1, jika urutannya dari yang terbesar maka harus di tukarkan, begitu pula pada pass selanjutnya, indeks selanjutnya, namun jika tidak maka tidak usah di tukarkan,
// 2. pada shell short sering menggunakan bantuan dari dari insert sort, membuat list 1 dan seterusnya di mulai langkah 2, langkah 1 dan terakhir menggunakan cara dari insertion sort
// 3. insertion sort, karena insertion sort di pisahkan datanya dari indeks 0 dan di mulai dari data yang paling kecil.

#include <iostream>
using namespace std;

int Asyura[31];
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 31)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 31 elemen.\n";

        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "masukan Elemen Array" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> Asyura[i];

    }

}

void selectionSortArray(){
    int i, j, temp;

    for (i = 1; i <= n - 2; i++) { //step 1
        temp = Asyura[j]; //step 2

        j = 1; //step 2a

        while ()


void display() {
    cout << endl;
    cout << "==============" << endl;
    cout << "Elemen array yang telah tersusun" << endl;
    cout << "==============" << endl;
    for (int j = 0; j < n; j++) {
    cout << Asyura[j] << endl;
    }
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main()
{
    input();
    selectionsort();
    display();

    system("Pause");
    return 0;
}
