#pragma once
#include<fstream>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include<process.h>
#include<dos.h>


using namespace std;
class hotel {
private:
	int nokamar;
	char nama[30];
	char alamat[30];
	char hp[30];
	int hari;
	long biaya;
	char fadhlil[30] = "Fadhlil";
	char alvian[30] = "Alvian";
	char weni[30] = "Weni";
	char vinni[30] = "Vinni";



public:
	int tanggal_in, bulan_in, bulan_checkout, tanggal_checkout, checkout, tahun_in;
	string nama_bulan, nama_bulan_checkout;
	void main_menu();
	void tambah();
	void tampil();
	void kamar();
	void edit();
	int status(int a);
	void editrekor(int a);
	void hapus_rekor(int a);
	void tambahan(int a);
	void validasi();
	void jd();


};




