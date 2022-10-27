#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	ulang:
	int pilih,ulangi;
	
	system("color B0");
	cout << "1. Enkripsi" ;
	cout << "\n2. Dekripsi" ;
	cout << "\n\nMasukkan Pilihan : ";
	cin >> pilih;
	cin.ignore();
	
	if(pilih==1){
		//ENKRIPSI
		string pesan;
		cout<<"Pesan hanya bisa berupa huruf/kata/kalimat \n";
		cout<<"Masukkan Pesan : ";
		getline(cin,pesan);
		
		int kunciEnkrip;
		cout<<"Masukkan kunci/key (1-25) : ";
		cin>>kunciEnkrip;
		cin.ignore();
		
		string TeksEnkripsi = pesan;
		
		for(int i=0; i < pesan.size() ;i++){
			if(pesan[i]==32){
				continue; //32 adalah renggan karakter dari ASCII
			}else{
				if((pesan[i]+kunciEnkrip) > 122){
					//setelah lowercase z kembali ke a,atau z's dari ASCII adalah 122
					int temp = (pesan[i] + kunciEnkrip)-122;
					TeksEnkripsi[i] = 96 + temp;
				}else if(pesan[i] + kunciEnkrip > 90 && pesan[i] <= 96){
					//after uppercase Z move back to A,90 is Z's ASCII
					int temp = (pesan[i] + kunciEnkrip) - 90;
					TeksEnkripsi[i] = 64 + temp;
				}else{
					//in case of characters being in between A-Z & a-z
					TeksEnkripsi[i] += kunciEnkrip;
				}
			}
		}
		cout<<"Pesan Enkripsi : "<<TeksEnkripsi;
	}else if(pilih==2){
		//deskripsi
		
		string EnkripPesan;
		cout<<"Pesan hanya bisa berupa huruf/kata/kalimat \n";
		cout<<"Masukkan Pesan : ";
		getline(cin,EnkripPesan);
		
		int kunciDekrip;
		cout<<"Masukkan kunci/key (1-25) : ";
		cin>>kunciDekrip;
		cin.ignore();
		
		string TeksDekripsi = EnkripPesan;
		
		for(int i = 0 ; i<EnkripPesan.size();i++){
			if(EnkripPesan[i]==32){
				continue;
			}else{
				if((EnkripPesan[i] - kunciDekrip) < 97 && (EnkripPesan[i] - kunciDekrip) > 90){
					int temp = (EnkripPesan[i] - kunciDekrip) + 26;
					TeksDekripsi[i] = temp;
				}else if((EnkripPesan[i] - kunciDekrip) < 65){
					int temp = (EnkripPesan[i] - kunciDekrip) + 26;
					TeksDekripsi[i] = temp;
				}else{
					TeksDekripsi[i] = EnkripPesan[i] - kunciDekrip;
				}
			}
		}
		cout<<"Pesan Dekripsi : "<<TeksDekripsi;
	}else{
		cout<<"Pilihan Salah ";
		system("cls");
		goto ulang;
	}
	salah:
		cout<<"\n\n";
		cout<<" Ulangi Lagi?\n 1.Ulangi Lagi\n 2.Selesai\n Masukkan Pilihan(1,2) : ";
		cin>>ulangi;
		cin.ignore();
		if(ulangi==1){
			system("cls");
			goto ulang;
		}else if(ulangi==2){
			exit(0);
		}else{
			cout<<"Pilihan tidak ada, Silahkan masukkan pilihan kembali ";
			goto salah;
		}
	return 0;
}
