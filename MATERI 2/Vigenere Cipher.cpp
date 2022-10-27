#include <iostream>

using namespace std;

#include "function/FunctionVigenereCipher.h"
int main() {
	string kata = "MY NAME IS ARFAN FROM PAMULANG UNIVERSITY";
	string key = "HIMTIF";

	cout << "+++ ENKRIPSI DENGAN VIGENERE CHIPER +++" << endl;
    cout << "Plantext       : " << kata << endl;
    cout << "key            : " << key << endl;
    cout << "Hasil Enkripsi : " << Enkripsi(kata, key);
	    
	string enkrip = Enkripsi(kata, key);
	cout << "\n\n+++ DEKRIPSI DENGAN VIGENERE CHIPER +++" << endl;
	cout << "Chiper         : " << enkrip << endl;
	cout << "Key            : " << key << endl;
	cout << "Hasil Dekripsi : " << Dekripsi(enkrip, key);
}
