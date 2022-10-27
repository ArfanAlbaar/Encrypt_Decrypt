string enkrip;
string Enkripsi(string kata, int kunci) {
	enkrip = "";       
	
	/* Looping untuk mengulang tiap karakter dalam variable kata */
	for (int i = 0; i < kata.length(); i++) {
		
		/* Apabila ada karakter spasi maka, akan memasukan spasi juga ke 
		variable enkrip */
		if (kata[i] == ' ')
			enkrip += ' ';
			
		/* Apabila terdapat karakter kapital, maka akan menjalankan kondisi dibawah */
		else if (isupper(kata[i]))
		/* Melakukan operasi pergeseran karakter sesuai urutan abjad*/
			enkrip += (((kata[i] - 'A') + kunci) % 26) + 'A';
		else	
			enkrip += (((kata[i] - 'a') + kunci) % 26) + 'a';
		
		int nilai;
	}
	return enkrip;
}

string Dekripsi(string kata, int kunci) {
	string hasil;
	for (int i = 0; i < kata.length(); i++) {
		if (kata[i] == ' ')
			hasil += ' ';
		else if (isupper(kata[i]))
			hasil += (((kata[i] - 'A') - kunci) % 26) + 'A';
		else
			hasil += (((kata[i] - 'a') - kunci) % 26) + 'a';	
	}
	return hasil;
}