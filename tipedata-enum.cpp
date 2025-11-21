#include <iostream>

using namespace std;

enum nama_zodiak {capricorn, aquarius,taurus,pisces,aries,cancer,gemini,leo,virgo,libra,scorpio,sagitarius};


int main() {

   nama_zodiak var1;

   var1 = scorpio;
   cout << var1<< endl;

   var1 = leo;
   cout << var1<< endl;

   var1 = taurus;
   cout << var1<< endl;

   var1 = pisces;
   cout << var1<< endl;


   //enum part 2

    string var1 ="ayooo belajar c++";
    string* var2 = &var1;//ini akan mengakses alamat memori yaitu var1 ke dalam var2
   // * untuk menandakan tipe data, tanda & menunjukan

    cout << var1 << endl;
    cout << var2 << endl;

    return 0;
}
