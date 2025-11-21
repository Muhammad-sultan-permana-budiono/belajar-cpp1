#include <iostream>

using namespace std;
// struktur part1 <<
struct siswa{
    string nama;
    string jeniskelamin;
    unsigned int uangsaku;
};

int main()
{
    struct siswa siswa1;
    siswa1.nama = "muhammad sultan ";
    siswa1.jeniskelamin = "laki laki";
    siswa1.uangsaku = 15000;

    cout << siswa1.nama << "jenis kelamin nya " << siswa1.jeniskelamin<<endl;
    cout << "diberi uang saku " << siswa1.uangsaku << " per pagi hari" << endl;

    return 0;
}
