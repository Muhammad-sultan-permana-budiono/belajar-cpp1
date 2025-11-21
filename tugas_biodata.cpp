// tugas tipe data biodata
#include <iostream>

using namespace std;
int main()
{
    string nama;
    string jurusan;
    int umur;
    float tinggibadan;

    cout << "masukan nama: ";
    getline(cin, nama);

    cout << "masukan jurusan: ";
    getline(cin, jurusan);

    cout << "masukan umur: ";
    cin >> umur;

    cout << "masukan tinggi badan: ";
    cin >> tinggibadan;

    cout << endl;

    cout << nama << " masuk jurusan " << jurusan << endl;
    cout << "berumur " << umur  << " tinggi badannya " << tinggibadan << endl;


    return 0;
}
