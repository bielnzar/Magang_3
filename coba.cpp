#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nrp;
    string departemen;
};

int main() {
    Mahasiswa mhs1;
    mhs1.nama = "Yanto";
    mhs1.nrp = 87;
    mhs1.departemen = "Teknik Informatika";

    Mahasiswa mhs2;
    mhs2.nama = "Budi";
    mhs2.nrp = 88;
    mhs2.departemen = "Sastra Mesin";

    Mahasiswa mhs[2] = {mhs1, mhs2};

    for (int i = 0; i < 2; i++){
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "NRP: " << mhs[i].nrp << endl;
        cout << "Departemen: " << mhs[i].departemen << endl
             << endl;
    }

    // cout << "Nama: " << mhs1.nama << endl;
    // cout << "NRP: " << mhs1.nrp << endl;
    // cout << "Departemen: " << mhs1.departemen << endl
    //      << endl;

    // cout << "Nama: " << mhs2.nama << endl;
    // cout << "NRP: " << mhs2.nrp << endl;
    // cout << "Departemen: " << mhs2.departemen << endl;

    return 0;
}