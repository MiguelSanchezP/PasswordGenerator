#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void displayMenu ();
void numericalPass(int l);
void alphabeticalPass(int l);
void fullPass (int l);
void numAlphPass(int l);

int main () {
  int decision;
  bool quit = false;
  int length;
  displayMenu();
  while (!quit) {
      cout << "\nYour option: ";
      cin >> decision;
      cout << "Length: ";
      cin >> length;
    switch (decision) {
      case 1:
        numericalPass(length);
        break;
      case 2:
        alphabeticalPass(length);
        break;
      case 3:
        numAlphPass(length);
        break;
      case 4:
        fullPass(length);
        break;
      case 0:
        quit = true;
      default:
        displayMenu();
        break;
    }
  }
  return 0;
}

void displayMenu () {
  cout << "1.- Numerical" << endl;
  cout << "2.- Only letters" << endl;
  cout << "3.- Full (without punctuation)" << endl;
  cout << "4.- Full (with punctuation)" << endl;
  cout << "5.- Help" << endl;
  cout << "6.- Show last 10 generated passwords" << endl;
  cout << "0.- Quit" << endl;
}

void numericalPass(int l) {
  int val1 = rand() % 100;
  for (int i = 0; i < l; i++) {
    
  }
}

void alphabeticalPass (int l) {

}

void numAlphPass (int l) {

}

void fullPass (int l) {

}
