#include "hotel.h"
#include "job.h"
hotel h;
job j;

void hotel::jd() {
	system("cls");
	cout << "Job Desk " << h.fadhlil << " sebagai " << j.mc << endl;
	cout << "Job Desk " << h.alvian << " sebagai " << j.ob << endl;
	cout << "Job Desk " << h.weni << " sebagai " << j.bfp << endl;
	cout << "Job Desk " << h.vinni << " sebagai " << j.rs << endl;
	cout << "\n\n\n\n"; 
	system("pause");
	system("cls");
}



void hotel::main_menu() {

	int awal;
	awal = 0;
	while (awal != 10) {

		
		cout << "\n\t\t\t\t Selamat Datang Di Hotel Teknik";
		cout << "\n\n\n\t\t\t1.Menambahkan Penghuni Hotel";
		cout << "\n\t\t\t2.Data Penghuni hotel";
		cout << "\n\t\t\t3.Kamar Yang Digunakan";
		cout << "\n\t\t\t4.Edit Penghuni";
		cout << "\n\t\t\t5.Pegawai";
		cout << "\n\t\t\t6.Exit";
		cout << "\n\n\t\t\tMasukkan Pilihan anda: ";
		cin >> awal;
		switch (awal) {
		case 1:	tambah();
			break;
		case 2:tampil();
			break;
		case 3:kamar();
			break;
		case 4:edit();
			break;
		case 5:jd(); break;

		case 6:
			system("cls"); 
			_exit(0); break;


		default: {
			cout << "\n\n\t\t\tPilihan Salah.....!!!";

			cin.get();
		}
		}
	}
}



void hotel::validasi() {

checkin:
	cout << "Tanggal Check In :"; cin >> tanggal_in;
	cout << "Bulan Check In :"; cin >> bulan_in;
	if (bulan_in > 12 && bulan_in < 12)
	{
		cout << "Maaf Tidak Ada Bulan lebih dari 12\nMungkin anda dari planet lain\n ";
		cin.ignore();
		goto checkin;

	}

	//validasi tanggal
	if (bulan_in == 1 && tanggal_in >= 31)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 2 && tanggal_in > 29)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 3 && tanggal_in > 31)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 4 && tanggal_in > 30)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 5 && tanggal_in > 31)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 6 && tanggal_in > 30)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 7 && tanggal_in > 31)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 8 && tanggal_in > 31)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 9 && tanggal_in > 30)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 10 && tanggal_in >= 31)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 11 && tanggal_in > 30)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	else if (bulan_in == 12 && tanggal_in > 31)
	{
		cout << "Masukkan tanggal dengan benar";
		cin.ignore();

		goto checkin;
	}
	cout << "Tahun Check In :"; cin >> tahun_in;
	if (tahun_in != 2019&& tahun_in!=2020)
	{
		cout << "\nMaaf Tahun yang anda inputkan Salah";
		cout << "\nTahun saat ini adalah 2019/2020 \n";
		cin.ignore();

		goto checkin;
	}
	tanggal_checkout = tanggal_in + hari;


	//validasi tanggal
	if (bulan_in == 1 && tanggal_checkout > 31)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 31;
	}
	else if (bulan_in == 2 && tanggal_checkout > 28)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 28;
	}
	else if (bulan_in == 3 && tanggal_checkout > 31)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 31;
	}
	else if (bulan_in == 4 && tanggal_checkout > 30)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 30;
	}
	else if (bulan_in == 5 && tanggal_checkout > 31)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 31;
	}
	else if (bulan_in == 6 && tanggal_checkout > 30)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 30;
	}
	else if (bulan_in == 7 && tanggal_checkout > 31)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 31;
	}
	else if (bulan_in == 8 && tanggal_checkout > 31)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 31;
	}
	else if (bulan_in == 9 && tanggal_checkout > 30)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 30;
	}
	else if (bulan_in == 10 && tanggal_checkout > 31)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 31;
	}
	else if (bulan_in == 11 && tanggal_checkout > 30)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 30;
	}
	else if (bulan_in == 12 && tanggal_checkout > 31)
	{
		bulan_checkout = bulan_in + 1;
		checkout = tanggal_checkout - 31;
	}
	else {
		checkout = tanggal_checkout;
		bulan_checkout = bulan_in;
	}

	//penamaan bulan
	if (bulan_in == 1)
	{
		nama_bulan = "Januari";
	}
	else if (bulan_in == 2)
	{
		nama_bulan = "Februari";
	}
	else if (bulan_in == 3)
	{
		nama_bulan = "Maret";
	}
	else if (bulan_in == 4)
	{
		nama_bulan = "April";
	}
	else if (bulan_in == 5)
	{
		nama_bulan = "Mei";
	}
	else if (bulan_in == 6)
	{
		nama_bulan = "Juni";
	}
	else if (bulan_in == 7)
	{
		nama_bulan = "Juli";
	}
	else if (bulan_in == 8)
	{
		nama_bulan = "Agustus";
	}
	else if (bulan_in == 9)
	{
		nama_bulan = "September";
	}
	else if (bulan_in == 10)
	{
		nama_bulan = "Oktober";
	}
	else if (bulan_in == 11)
	{
		nama_bulan = "November";
	}
	else if (bulan_in == 12)
	{
		nama_bulan = "Desember";
	}
	//penamaan bulan cek out
	if (bulan_checkout == 1)
	{
		nama_bulan_checkout = "Januari";
	}
	else if (bulan_checkout == 2)
	{
		nama_bulan_checkout = "Februari";
	}
	else if (bulan_checkout == 3)
	{
		nama_bulan_checkout = "Maret";
	}
	else if (bulan_checkout == 4)
	{
		nama_bulan_checkout = "April";
	}
	else if (bulan_checkout == 5)
	{
		nama_bulan_checkout = "Mei";
	}
	else if (bulan_checkout == 6)
	{
		nama_bulan_checkout = "Juni";
	}
	else if (bulan_checkout == 7)
	{
		nama_bulan_checkout = "Juli";
	}
	else if (bulan_checkout == 8)
	{
		nama_bulan_checkout = "Agustus";
	}
	else if (bulan_checkout == 9)
	{
		nama_bulan_checkout = "September";
	}
	else if (bulan_checkout == 10)
	{
		nama_bulan_checkout = "Oktober";
	}
	else if (bulan_checkout == 11)
	{
		nama_bulan_checkout = "November";
	}
	else if (bulan_checkout == 12)
	{
		nama_bulan_checkout = "Desember";
	}


}


void hotel::tambah() {
	int a, b, c;
	system("cls");
	ofstream data;
	data.open("data.txt", ios::app | ios::binary);
	cout << "\n Detail Penghuni";
	cout << "\n ---------------";
	cout << "\n\nKamar No:";
	cin >> a;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	b = status(a);
	if (b) {
		cout << "Maaf Kamar Sudah Ditempati";
	}
	else {
		nokamar = a;
		cout << "Nama:";
		cin.getline(nama,30);
		cout << "Alamat:";
		cin.getline(alamat, 30);
		cout << "No HP yang dapat dihubungi:";
		cin >> hp;
		cout << "Berapa Malam Menginap:";
		cin >> hari;
	atas:
		cout << "\t--------------------------------------------------------\n";
		cout << "\tNo   | Tipe         | Jenis Ranjang    | Harga     \n";
		cout << "\t--------------------------------------------------------\n";
		cout << "\t1.   | Standar		 Single 	Rp. 200000\n";
		cout << "\t2.   | Standar		 Twin  		Rp. 230000\n";
		cout << "\t3.   | Standar    	 Double		Rp. 250000\n";
		cout << "\t4.   | Standar    	 Tripple 	Rp. 270000\n";
		cout << "\t5.   | Premium		 Single 	Rp. 300000\n";
		cout << "\t6.   | Premium		 Twin  		Rp. 330000\n";
		cout << "\t7.   | Premium    	 Double		Rp. 350000\n";
		cout << "\t8.   | Premium    	 Tripple 	Rp. 370000\n";
		cout << "\t9.   | Deluxe 		 Single 	Rp. 400000\n";
		cout << "\t10.  | Deluxe		 Twin  		Rp. 430000\n";
		cout << "\t--------------------------------------------------------\n";
		cout << "Silahkan Masukkan Tipe yang anda pilih(Angka):";
		cin >> c;
		switch (c) {
		case 1:biaya = hari * 200000; break;
		case 2:biaya = hari * 230000; break;
		case 3:biaya = hari * 250000; break;
		case 4:biaya = hari * 270000; break;
		case 5:biaya = hari * 300000; break;
		case 6:biaya = hari * 330000; break;
		case 7:biaya = hari * 350000; break;
		case 8:biaya = hari * 370000; break;
		case 9:biaya = hari * 400000; break;
		case 10:biaya = hari * 430000; break;
		default:cout << "Anda salah memasukkan tipe Kamar!!\n"; goto atas;
		}
		cout << "Biayanya:" << biaya << endl;
		validasi();
		cout << "\nTanggal Checkout :" << checkout;
		cout << "\nBulan Checkout: " << nama_bulan_checkout << endl;




	}
	data.write((char*)&h, sizeof(hotel));
	system("pause");
	system("cls");
	data.close();
}




void hotel::tampil() {
	system("cls");
	ifstream data("data.txt", ios::in);
	int a,b=0;
	cout << "Masukkan Nomor Hotel:";
	cin >> a;
	while (data.read((char*)&h, sizeof(hotel))) {
		if (nokamar == a) {

			cout << "\n\t\t\t******************************\n";
			cout << "\t\t\tNomor Kamar:" << nokamar << endl;
			cout << "\t\t\tNama:" << nama << endl;
			cout << "\t\t\tAlamat:" << alamat << endl;
			cout << "\t\t\tNo Telepon:" << hp << endl;
			cout << "\t\t\tLama Menginap:" << hari << endl;
			cout << "\t\t\tTanggal Checkin:" << tanggal_in << endl;
			cout << "\t\t\tBulan Checkin:" << nama_bulan << endl;
			cout << "\t\t\tTanggal Checkout:" << checkout << endl;
			cout << "\t\t\tBulan Checkout:" << nama_bulan_checkout << endl;
			cout << "\t\t\tTotal Biaya:" << biaya << endl;
			cout << "\t\t\t******************************\n";
			data.close();
			system("pause");
			system("cls");
			b = 1;
			data.close();
		}
	}
	if (b == 0) {
		cout << "\nMaaf kamar Kosong";
		system("pause");
		system("cls");
		data.close();
	}
	
}



void hotel::kamar() {
	system("cls");
	ifstream data;
	data.open("data.txt", ios::in);
	cout << "Kamar yang sudah terisi";
	while (data.read((char*)&h, sizeof(hotel))) {
		//data.read((char*)&h, sizeof(hotel));
		cout << "\n\t\t\t***************************\n";
		cout << "\t\t\tNo kamar:" << nokamar << endl;
		cout << "\t\t\tNama:" << nama << endl;
		cout << "\t\t\tAlamat:" << alamat << endl;
		cout << "\t\t\tNo HP:" << hp << endl;
		cout << "\t\t\tLama Menginap:" << hari << endl;
		cout << "\t\t\tTanggal Checkin:" << tanggal_in << endl;
		cout << "\t\t\tBulan Checkin:" << nama_bulan << endl;
		cout << "\t\t\tTanggal Checkout:" << checkout << endl;
		cout << "\t\t\tBulan Checkout:" << nama_bulan_checkout << endl;
		cout << "\t\t\tTotal Tagihan:" << biaya << endl;

		cout << "\t\t\t***************************\n";
	}
	system("pause");
	system("cls");
	data.close();
}

void hotel::edit() {
	system("cls");
	int a, b;
	cout << "Edit Menu:\n";
	cout << "1.Edit Data Customer:\n";
	cout << "2.Hapus Data Customer:\n";
	cout << "3.Tambahan\n";
	cout << "Pilihan Kamu:"; cin >> b;
	system("cls");
	cout << "\nMasukkan No Kamar:"; cin >> a;
	switch (b) {
	case 1:editrekor(a); break;
	case 2:hapus_rekor(a); break;
	case 3:tambahan(a); break;
	default:cout << "\nPilihan Salah!!";

	}
	system("pause");

	system("cls");
}
int hotel::status(int a) {
	int r = 0;
	ifstream data("data.txt", ios::in);
	while (data.read((char*)&h, sizeof(hotel))) {

		if (nokamar == a) {
			r = 1;
		}

	}
	data.close();
	return(r);
}

void hotel::editrekor(int a) {

	system("cls");
	int e, b = 0, c;
	fstream data;
	data.open("data.txt", ios::in | ios::out );
	while (!data.eof()) {
		e = data.tellg();
		data.read((char*)&h, sizeof(hotel));
		if (nokamar == a) {
			cout << "Masukkan Data Pelanngang yang Baru\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Nama:";
			cin.getline(nama, 30);
			cout << "Alamat:";
			cin.getline(alamat, 30);
			cout << "No HP yang dapat dihubungi:";
			cin >> hp;
			cout << "Berapa Malam Menginap:";
			cin >> hari;
		atas:
			cout << "\t--------------------------------------------------------\n";
			cout << "\tNo   | Tipe         | Jenis Ranjang    | Harga     \n";
			cout << "\t--------------------------------------------------------\n";
			cout << "\t1.   | Standar		 Single 	Rp. 200000\n";
			cout << "\t2.   | Standar		 Twin  		Rp. 230000\n";
			cout << "\t3.   | Standar    	 Double		Rp. 250000\n";
			cout << "\t4.   | Standar    	 Tripple 	Rp. 270000\n";
			cout << "\t5.   | Premium		 Single 	Rp. 300000\n";
			cout << "\t6.   | Premium		 Twin  		Rp. 330000\n";
			cout << "\t7.   | Premium    	 Double		Rp. 350000\n";
			cout << "\t8.   | Premium    	 Tripple 	Rp. 370000\n";
			cout << "\t9.   | Deluxe 		 Single 	Rp. 400000\n";
			cout << "\t10.  | Deluxe		 Twin  		Rp. 430000\n";
			cout << "\t--------------------------------------------------------\n";
			cout << "Silahkan Masukkan Tipe yang anda pilih(Angka):";
			cin >> c;
			switch (c) {
			case 1:biaya = hari * 200000; break;
			case 2:biaya = hari * 230000; break;
			case 3:biaya = hari * 250000; break;
			case 4:biaya = hari * 270000; break;
			case 5:biaya = hari * 300000; break;
			case 6:biaya = hari * 330000; break;
			case 7:biaya = hari * 350000; break;
			case 8:biaya = hari * 370000; break;
			case 9:biaya = hari * 400000; break;
			case 10:biaya = hari * 430000; break;
			default:cout << "Anda salah memasukkan tipe Kamar!!\n"; goto atas;
			}
			cout << "Biayanya:" << biaya << endl;
			validasi();

			data.seekg(e);
			data.write((char*)&h, sizeof(hotel));
			cout << "Data Berhasil diubah" << endl;
			b = 1;
			break;
			data.close();
		}
	}
	if (b == 0) {
		cout << "\nMaaf Room Sudah ditempati/Tidak ada\n";
		
	}
	data.close();
}

void hotel::tambahan(int a) {
	system("cls");
	int e, b = 0, c, pill;
	fstream data;
	data.open("data.txt", ios::in | ios::out);
	while (!data.eof()) {
		e = data.tellg();
		data.read((char*)&h, sizeof(hotel));
		if (nokamar == a) {

			cout << "\n\t\t\t--------Service Tambahan------\n";
			cout << "\t\t\t1.Wifi SuperSpeed" << endl;
			cout << "\t\t\t2.Breakfast" << endl;
			cout << "\t\t\t3.Diner\n";
			cout << "Silahkan Masukkan Service yang anda pilih";
			cin >> c;
			switch (c) {

			case 1:cout << "Tagihan Anda Sebelumnnya:Rp." << biaya << endl; biaya += 50000; break;
			case 2:breakfast:
				cout << "Tagihan Anda Sebelumnnya:Rp." << biaya << endl;
				cout << "Menu Breakfast:\n1.Paket Breakfast 1(30k)\n2.Paket Breakfast 2(60k)\n3.Paket Breakfast 3 (90k)\n";
				cout << "Pilihan Anda:"; cin >> pill;
				if (pill == 1) {
					biaya += 30000; break;
				}
				else if (pill == 2) { biaya += 60000; break; }
				else if (pill == 3) { biaya += 90000; break; }
				else {
					cout << "Pilihan Anda Salah\n"; goto breakfast;
				}
			case 3:dinner: cout << "Menu Breakfast:\n1.Paket Dinner(30k)\n2.Paket Dinner 2(60k)\n3.Paket Dinner 3(90k)\n";
				cout << "Tagihan Anda Sebelumnnya:Rp." << biaya << endl;
				cout << "Pilihan Anda:"; cin >> pill;
				if (pill == 1) { biaya += 30000; break; }
				else if (pill == 2) { biaya += 60000; break; }
				else if (pill == 3) { biaya += 90000; break; }
				else {
					cout << "Pilihan Anda Salah\n"; goto dinner;
				}
			}
			cout << "Biayanya:" << biaya;
			data.seekg(e);
			data.write((char*)&h, sizeof(hotel));
			cout << "Data Berhasil diubah";
			b = 1;
			break;

		}
	}
	if (b == 0) {
		cout << "\nMaaf Room Sudah ditempati/Tidak ada\n";
		
	}
	data.close();
}







void hotel::hapus_rekor(int a) {
	system("cls");
	int b = 0;
	char c;
	fstream data;
	data.open("data.txt", ios::in);
	ofstream datae;
	datae.open("datae.txt", ios::out);
	while (data.read((char*)&h, sizeof(hotel))) {

		if (nokamar == a) {
			cout << "\nNama:" << nama;
			cout << "\nAlamat:" << alamat;
			cout << "\nNo HP yang dapat dihubungi:" << hp;
			cout << "\nBerapa Malam Menginap:" << hari;
			cout << "Apakah kamu yakin menghapus data ini:(Y|N):";
			cin >> c;
			if (c == 'N' || c == 'n')
				datae.write((char*)&h, sizeof(hotel)); b = 1;


		}
		else {
			datae.write((char*)&h, sizeof(hotel)); b = 1;
		}

	}
	data.close();
	datae.close();

	if (b == 0) {
		cout << "\nMaaf Kamar Tidak ditemukan";
	}
	else {

		remove("data.txt");
		rename("datae.txt", "data.txt");
	}
}







int main() {

	cout << "\n\n\n\t\t\tSilahkan login terlebih dahulu untuk Membuktikan anda bukan maling!!!\n";
	system("pause");
	system("cls");
	int b = 0, c = 3;

	string username, password;
	while (b <= 3) {
		cout << "Masukkan username:"; cin >> username;
		cout << "Masukkan password:"; cin >> password;
		if (username == "admin" && password == "admin") {
			cout << "ANDA BERHASIL LOGIN\n";
			b = 1;

			system("pause");
			system("cls");
			h.main_menu();

		}
		else
			b += 1;
		c--;
		cout << "Anda memiliki Kesempatan" << c << " kali lagi\n";
		
		system("pause");
		system("cls");
		if (c == 0) {
			exit(0);
	}



	}
}
