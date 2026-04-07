#include <iostream>
using namespace std;

struct detailalamat;
{
    string desa;
    string kota;
};

struct orang 
{
    string nama;
    detailalamat alamat;
    int umur;
};

int main ()
{
    //deklarasi variabel struct
    orang mhs[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Isikan data nama : ";
        getline(cin, mhs[i].nama);
        cout << "Isikan data desa : ";
        getline(cin, mhs[i].alamat.desa);
        cout << "Isikan data kota : ";
        getline(cin, mhs[i].alamat.kota);
        cout << "Isikan data umur : ";
        cin >> mhs[i].umur;
        cin.ignore(); // untuk membersihkan buffer setelah membaca umur
        cout << endl;
    }

    for (int i = 0; i <= 2; i++)
    {
        cout << "Data tampil" << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Desa : " << mhs[i].alamat.desa << endl;
        cout << "Kota : " << mhs[i].alamat.kota << endl;
        cout << "Umur : " << mhs[i].umur << endl;
        cout << endl;
     }
}
