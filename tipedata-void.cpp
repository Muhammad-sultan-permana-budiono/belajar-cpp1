#include <iostream>

using namespace std;

void SayHello(){
cout << "halooo, ini void" << endl;
};

void sapa(string nama) {
cout << "halooo, " << nama << "!" << endl;
};
int main() {
    SayHello();
    sapa ("mariaam");

    return 0;
}
