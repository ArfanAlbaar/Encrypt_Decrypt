string Enkripsi(string kata, string key) {
    string hasil;
    int k = 0;
    while (kata.length() > key.length())
        key += key;
    for (int i = 0; i < kata.length(); i++) {
    	if (kata[i] == ' ')
    		hasil += ' ';
        else if (isupper(kata[i])) {
            hasil += (((kata[i] - 'A') + (key[k] - 'A')) % 26) + 'A';
            k++;
        } else {
            hasil += (((kata[i] - 'a') + (key[k] - 'a')) % 26) + 'a';
            k++;
        }
    }
    return hasil;
}
string Dekripsi(string kata, string key) {
    string hasil;
    int k = 0;
    while (kata.length() > key.length())
        key += key;
        
    for (int i = 0; i < kata.length(); i++) {
    	if (kata[i] == ' ')
    		hasil += ' ';
        else if (isupper(kata[i])) {
            hasil += ((((kata[i] - 'A') + 26) - (key[k] - 'A')) % 26) + 'A';
            k++;
        } else {
            hasil += ((((kata[i] - 'a') + 26) - (key[k] - 'a')) % 26) + 'a';
            k++;
        }
   
    }
	return hasil;
}