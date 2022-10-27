#include <iostream>

using namespace std;

#include "function/FunctionCaesarCipher.h"

int main() {
	int key;
	string kata;
	cout << "+++ ENKRIPSI DAN DEKRIPSI CAESAR CHIPER +++" << endl;
	cout << "+++ Program ini masih memiliki bug\njadi gunakan huruf kapital saja +++\n" << endl;
	cout << "kata     : "; getline(cin, kata); 
	cout << "Kunci    : "; cin >> key;
	cout << "Enkripsi : " << Enkripsi(kata, key) << endl;
	cout << "Dekripsi : " << Dekripsi(enkrip, key) << endl;
}
