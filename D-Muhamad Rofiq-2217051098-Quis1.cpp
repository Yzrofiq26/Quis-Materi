#include <iostream>
using namespace std;

#define NPM 2217051098

int main() {

  int DuaVariabel = NPM % 100;

  int VariabelTerkecil = min(DuaVariabel/ 10, DuaVariabel % 10);



  cout << "Bilangan terkecil: " << VariabelTerkecil << endl;



  return 0;

}


