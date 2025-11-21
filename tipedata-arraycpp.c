#include <iostream>

using namespace std;
int main()
{
//array part1
   int nilai [4];
   nilai[0] = 81;
   nilai[1] = 79;
   nilai[2] = 75;
   nilai[3] = 70;

   cout << "sangat baik = " << nilai[0] << endl;
   cout << "baik = " << nilai[1] << endl;
   cout << "cukup baik = " << nilai[2] << endl;
   cout << "kurang baik =" << nilai[3] << endl;

//part 2
   char karakter [6] ={'s','u','l','t','a','n'};

  cout << "huruf pertama : "  << karakter[0] << endl;
  cout << "huruf kedua : " << karakter[1] << endl;
  cout << "huruf ketiga : " << karakter[2] << endl;
  cout << "huruf keempat : " << karakter[3] << endl;
  cout << "huruf kelima : " << karakter[4] << endl;
  cout << "huruf keenam : " << karakter[5] << endl;

    return 0;
}
