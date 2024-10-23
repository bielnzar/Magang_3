#include <iostream>
using namespace std;

class Karyawan{
private:
    string Nama;
    double Gaji;

public:
    Karyawan(string nama, double gaji){
        Nama = nama;
        Gaji = gaji;
    }

    double getGaji(){
        return Gaji;
    }

    void setGaji(double g){
        if (g >= 0){
            Gaji = g;
        }
        else{
            cout << "Gaji tidak boleh negatif!" << endl;
        }
    }

    void display(){
        cout << "Nama: " << Nama << endl;
        cout << "Gaji: " << Gaji << endl;
    }
};

int main()
{
    // Membuat objek karyawan
    Karyawan karyawan1("Andi", 5000);

    // karyawan1.Gaji = 10000;

    // Menampilkan info karyawan
    karyawan1.display();

    // Mengubah gaji karyawan
    karyawan1.setGaji(6000);
    cout << "\nSetelah gaji diperbarui:" << endl;
    karyawan1.display();

    // Mencoba mengubah gaji menjadi nilai negatif
    karyawan1.setGaji(-2000);

    return 0;
}
