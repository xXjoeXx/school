#include <iostream>
#include <string>
#include <windows.h> //lustige windows beeps :O
#include <fstream>
using namespace std;

int main(void) {
string password, eingabe;
//eingabe der datei

ifstream inFile;
inFile.open("pw.txt");
inFile >> password;
  for ( int i = 0; i <= 2; i++) { //max. 3 falsche Eingaben
    cout << "Passwort:";
    if(cin>>eingabe, password == eingabe) {
      cout << "\nPasswort akzeptiert!";
      break;
    } else {
      Beep(500, 50);
      Beep(300, 50);
      cout << "\nPasswort falsch!\n";
  }
}
  cin.sync();
  cin.get(); //Konsole offenhalten
}

