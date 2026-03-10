// Bubble Sort Algorithm in C++ //

#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variable global array a dengan ukuran 20
int n;    // Deklarasi variabel global n untuk menyimpan banyaknya elemen pada array

void input()
{
    // procedur untuk input
    int d;
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
        cin >> n;    // Input dari pengguna
        if (n <= 20)    // Jika n kurang dari atau sama dengan 20
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Jika n lebih dari 20
        }
    }

    cout << endl;
    cout << "======================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": "; // Looping dengan i dimulai dari 0 hingga n-1
        cin >> arr[i];    // Input dari pengguna
    }
}

void bubbleSort()
{
    // Procedure untuk bubble sort
    int pass = 1; // step untuk melintasi array dimulai dari 1
    do
    {
        for (int j = 0; j < n - pass; j++)
        {
            if (arr[j] > arr[j + 1]) // jika data ke j lebih besar dari data ke j+1, lakukan swap
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= n - 1);
    
    cout << "\nArray telah diurutkan dengan Bubble Sort!" << endl;
}

void display()
{
    // Procedure untuk menampilkan hasil
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // menampilkan data array
    }
    cout << endl;
}