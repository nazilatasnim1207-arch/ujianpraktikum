#include<iostream>
#include<iomanip>
using namespace std;
int main() {

	double harga, diskonpersen, jumlahdiskon, hargaakhir;

	cout << "Selamat Datang di Toko Unisba Blitar\n" << endl;
	cout << "===========================================\n\n" << endl;
	cout << "Silahkan Masukkan :" << endl;

	cout << left << setw(2) << "Harga Barang(Rp) =";
	cin >> harga;

	cout << left << setw(2) << "Diskon Barang (%) =";
	cin >> diskonpersen;

	cout << "\n\n";
	cout << "hasil :\n";

	//hitung diskon
	jumlahdiskon = harga * (diskonpersen / 100);
	hargaakhir = harga - jumlahdiskon;


	cout << "jumlah diskon : " << jumlahdiskon << endl;
	cout << "harga setelah diskon : Rp " << hargaakhir << endl;

	return 0;
		
}
