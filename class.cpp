#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string Nama;
    int Nrp;
    string Departemen;

    // Method
    void display(){
        cout << "Nama: " << Nama << endl;
        cout << "NRP: " << Nrp << endl;
        cout << "Departemen: " << Departemen << endl
             << endl;
    }

        void modify(string nama, int nrp, string departemen){
        Nama = nama;
        Nrp = nrp;
        Departemen = departemen;
    }

    Mahasiswa(){
        Nama = "Yanto";
        Nrp = 87;
        Departemen = "Teknik Informatika";
    }

    Mahasiswa(string nama, int nrp, string departemen){
        Nama = nama;
        Nrp = nrp;
        Departemen = departemen;
    }

    Mahasiswa(const Mahasiswa &mhs){
        Nama = mhs.Nama;
        Nrp = mhs.Nrp;
        Departemen = mhs.Departemen;
    }
};

int main()
{
    // Mahasiswa mhs1;
    // mhs1.Nama = "Yanto";
    // mhs1.Nrp = 87;
    // mhs1.Departemen = "Teknik Informatika";

    // Mahasiswa mhs2;
    // mhs2.Nama = "Budi";
    // mhs2.Nrp = 88;
    // mhs2.Departemen = "Sastra Mesin";

    // mhs1.display();
    // mhs2.display();

    // mhs1.modify("Yanti", 89, "Teknik Informatika");
    // mhs1.display();

    Mahasiswa mhs1;
    Mahasiswa mhs2("Budi", 88, "Sastra Mesin");
    Mahasiswa mhs3 = mhs1;

    mhs1.display();
    mhs2.display();
    mhs3.display();

    return 0;
}