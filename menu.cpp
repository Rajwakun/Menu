#include <iostream>
#include <conio.h>
using namespace std;
int data[100], t[100];
int n; // jumlah data

// Pilihan Menu
void dMenu()
{
  system("cls");
  cout << "Aplikasi Tampilan Menu" << "\n";
  cout << "1. Masukkan data" << "\n";
  cout << "2. Tampilkan isi data" << "\n";
  cout << "3. Sortir data" << "\n";
  cout << "4. Informasi Saya" << "\n";
  cout << "5. Exit" << "\n";
  cout << "Masukan angka :";
}

void ascendingSort( int data[], int n)
{
  int temp;
  for (int i = 1; i < n; i++) {
    temp = data[i];
    int j = i - 1;
    while (j >= 0 && data[j] > temp) {
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = temp;
  }
}

void descendingSort( int data[], int n)
{
  int temp;
  for (int i = 1; i < n; i++) {
    temp = data[i];
    int j = i - 1;
    while (j >= 0 && data[j] < temp) {
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = temp;
  }
}

void sort(int data[], int n) {
  char choice;
  cout << "Pilih urutan (1 untuk Ascending, 2 untuk Descending): " << endl;
  choice = getch();
  switch (choice)
    {
    case '1':
      ascendingSort(data, n);
      break;
    case '2':
      descendingSort(data, n);
      break;
    default:
      system("cls");
      cout << "Pilihan Tidak Tersedia" << endl;
      getch();
      break;
    }

}

void copy() {
  for (int i = 0; i < n; i++) {
      t[i] = data[i];
  }
}

// Fungsi setiap menu
void ms()
{
  system("cls");
  cout << "Masukkan jumlah data: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan Data ke-" << i + 1 << ": ";
      cin >> data[i];
  }
  copy();
  cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
  getch();
}

void md()
{
  system("cls");

    if (n == 0)
  {
    cout << "Data belum dimasukkan." << endl;
    getch();
    return;
  } else {
    cout << "Data yang dimasukkan adalah: ";
    for (int i = 0; i < n; i++)
    {
      cout << t[i] << " ";
    }
    cout << endl;
    cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
  }
  getch();
}

void mt()
{
  system("cls");
  if (n == 0)
  {
    cout << "Data belum dimasukkan." << endl;
    getch();
    return;
  }
  else
  {
    sort(data, n);
    cout << "Data yang telah diurutkan adalah: ";
    for (int i = 0; i < n; i++)
    {
      cout << data[i] << " ";
    }

    cout << endl;
    cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
  }
  getch();
}



void me()
{
  system("cls");
  cout << "Aku anak Mafia, sindikat paling kejam" << endl;
  getch();
}

// Fungsi utama
int main()
{
  char p;
  do
  {
    dMenu();
    p = getch();
    switch (p)
    {
    case '1':
      ms();
      break;
    case '2':
      md();
      break;
    case '3':
      mt();
      break;
    case '4':
      me();
      break;
    case '5':
      break;

    default:
      system("cls");
      cout << "Pilihan Tidak Tersedia";
      getch();
      break;
    }

  } while (p != '5');
  return 0;
}