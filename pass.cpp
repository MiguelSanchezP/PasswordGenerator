#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void displayMenu ();
void numericalPass(int l);
void capitalCase(int l);
void lowerCase (int l);
void mixedCase(int l);
void fullPass (int l);
void numAlphPass(int l);
void clear (char c [1024]);

char finalPass[1024];

int main () {
  int decision;
  bool quit = false;
  int length;
  displayMenu();
  cin >> decision;
  while (!quit) {
    switch (decision) {
      case 1:
        numericalPass(length);
        break;
      case 2:
        capitalCase(length);
        break;
      case 3:
        lowerCase(length);
        break;
      case 4:
        mixedCase (length);
        break;
      case 5:
        numAlphPass(length);
        break;
      case 6:
        fullPass(length);
        break;
      case 0:
        quit = true;
        break;
      default:
        displayMenu();
        break;
    }

        cout << "\nYour option: ";
        cin >> decision;
        cout << "Length: ";
        cin >> length;
  }
  return 0;
}

void displayMenu () {
  cout << "1.- Numerical" << endl;
  cout << "2.- Only capital letters" << endl;
  cout << "3.- Only lowercase letters" << endl;
  cout << "4.- All letters" << endl;
  cout << "5.- Full (without punctuation)" << endl;
  cout << "6.- Full (with punctuation)" << endl;
  cout << "7.- Help" << endl;
  cout << "0.- Quit" << endl;
}

void numericalPass(int l) {
  clear(finalPass);
  for (int i = 0; i < l; i++) {
    int val1 = rand() % 10;
    finalPass[i] = val1;
    cout << val1;
  }
  cout << endl;
}

void capitalCase (int l) {
    char characters [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    clear (finalPass);
    for (int i = 0; i < l; i++) {
      int val1 = rand() % 26;
      finalPass[i] = characters[val1];
      cout << characters[val1];
    }
    cout << endl;
}

void lowerCase(int l) {
    char characters [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    clear(finalPass);
    for (int i = 0; i < l; i++) {
      int val1 = rand()%26;
      finalPass[i] = characters[val1];
      cout << characters[val1];
    }
    cout << endl;
}

void mixedCase (int l) {
  char characters [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  clear (finalPass);
  for (int i = 0; i < l; i++) {
    int val1 = rand()%52;
    finalPass[i] = characters[val1];
    cout << characters[val1];
  }
  cout << endl;
}

void numAlphPass (int l) {
  char characters [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
  clear (finalPass);
  for (int i = 0; i < l; i++) {
    int val1 = rand()%60;
    finalPass [i] = characters[val1];
    cout << characters [val1];
  }
  cout << endl;
}

void fullPass (int l) {
  char characters [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '!', '|', '@', '#', '$', '%', '&', '/', '(', ')', '=', '?', '[', ']', '{', '}', ',', ';', '.', ':', '-', '_', '<', '>'};
  clear(finalPass);
  for (int i = 0; i < l; i++) {
    int val1 = rand()%82;
    finalPass [i] = characters[val1];
    cout << characters[val1];
  }
  cout << endl;
}

void clear (char c [1024]) {
  for (int i = 0; i < 1024; i++) {
    c[i] = '\0';
  }
}
